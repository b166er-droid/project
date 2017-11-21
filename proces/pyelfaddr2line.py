#-------------------------------------------------------------------------------
# elftools example: dwarf_decode_address.py
#
# Decode an address in an ELF file to find out which function it belongs to
# and from which filename/line it comes in the original source file.
#
# Eli Bendersky (eliben@gmail.com)
# This code is in the public domain
#-------------------------------------------------------------------------------
from __future__ import print_function
import sys

# If pyelftools is not installed, the example can also run from the root or
# examples/ dir of the source distribution.
sys.path[0:0] = ['.', '..']

from elftools.common.py3compat import maxint, bytes2str
from elftools.dwarf.descriptions import describe_form_class
from elftools.elf.elffile import ELFFile


def process_file(filename, address1,address2):
    print('Processing file:', filename)
    with open(filename, 'rb') as f:
        elffile = ELFFile(f)

        if not elffile.has_dwarf_info():
            print('  file has no DWARF info')
            return

        # get_dwarf_info returns a DWARFInfo context object, which is the
        # starting point for all DWARF-based processing in pyelftools.
        dwarfinfo = elffile.get_dwarf_info()
        ndict={}
            #print (address)
            #address=address2
        funcname_l = decode_funcname(dwarfinfo, address1,address2+1)
        for funcname in funcname_l:
            if funcname[1] not in ndict:
                ndict[funcname[1]]=[]
                ndict[funcname[1]].append(funcname[0])
            else:
                ndict[funcname[1]].append(funcname[0])

        for funcname in ndict:
            print('Function:', bytes2str(funcname))
            addresses=[]
            for address in ndict[funcname]:
                addresses.append(address)
            alf_list = decode_file_line(dwarfinfo, addresses)
            for address,line,file in alf_list:
                if file==None:
                    continue
                #print('Function:', bytes2str(funcname))
                print(' Address:', hex(address))
                print(' File:', bytes2str(file))
                print(' Line:', line)
            print('\n\n')



def decode_funcname(dwarfinfo, address1, address2):
    # Go over all DIEs in the DWARF information, looking for a subprogram
    # entry with an address range that includes the given address. Note that
    # this simplifies things by disregarding subprograms that may have
    # split address ranges.
    func_l=[]
    for CU in dwarfinfo.iter_CUs():
        for DIE in CU.iter_DIEs():
            try:
                if DIE.tag == 'DW_TAG_subprogram':
                    lowpc = DIE.attributes['DW_AT_low_pc'].value

                    # DWARF v4 in section 2.17 describes how to interpret the
                    # DW_AT_high_pc attribute based on the class of its form.
                    # For class 'address' it's taken as an absolute address
                    # (similarly to DW_AT_low_pc); for class 'constant', it's
                    # an offset from DW_AT_low_pc.
                    highpc_attr = DIE.attributes['DW_AT_high_pc']
                    highpc_attr_class = describe_form_class(highpc_attr.form)
                    if highpc_attr_class == 'address':
                        highpc = highpc_attr.value
                    elif highpc_attr_class == 'constant':
                        highpc = lowpc + highpc_attr.value
                    else:
                        print('Error: invalid DW_AT_high_pc class:',
                              highpc_attr_class)
                        continue
                    for address in range(address1,address2):
                        if lowpc <= address <= highpc:
                            func_l.append((address,DIE.attributes['DW_AT_name'].value))
            except KeyError:
                continue
    return func_l


def decode_file_line(dwarfinfo, addresses):
    # Go over all the line programs in the DWARF information, looking for
    # one that describes the given address.
    dfl=[]
    for CU in dwarfinfo.iter_CUs():
        # First, look at line programs to find the file/line for the address

        for address in addresses:
            lineprog = dwarfinfo.line_program_for_CU(CU)
            prevstate = None
            for entry in lineprog.get_entries():
                # We're interested in those entries where a new state is assigned
                if entry.state is None or entry.state.end_sequence:
                    continue
                # Looking for a range of addresses in two consecutive states that
                # contain the required address.

                if prevstate and prevstate.address <= address < entry.state.address:
                    filename = lineprog['file_entry'][prevstate.file - 1].name
                    line = prevstate.line
                    dfl.append((address,line,filename))
                prevstate = entry.state
    return dfl


if __name__ == '__main__':
    if sys.argv[1] == '--test':
        process_file(sys.argv[2], 0x400503)
        sys.exit(0)

    if len(sys.argv) < 3:
        print('Expected usage: {0} <address> <executable>'.format(sys.argv[0]))
        sys.exit(1)
    addr1 = int(sys.argv[1], 0)
    addr2 = int(sys.argv[2], 0)

    process_file(sys.argv[3], addr1, addr2)
