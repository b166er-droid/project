from subprocess import call
import re
#from ast import literal_eval
name="A21.c"
f=open(name)
ispis=open("ispis.txt","rw+")
lines=f.readlines()
call(["gcc","-g","-c",name])
asm=str(call(["objdump","-d","-M","intel","-S",name[:-1]+'o'],stdout=ispis)).split('\n')
ispis.seek(0)
output=ispis.readlines()
output= [line.strip() for line in output]
ispis.close()

for line in output:
    print line

#for line in output:
    #print literal_eval(line)
start = 0
kod=list()
assembly=list()
code=""
asm=""
pom=""
for line in output:
    if "main" in line:
        start=1
        continue
    if not line:
        continue
    if start==1:
        if re.search("^[0-9a-z]*:",line)!=None:
            if code!="":
                kod.append(code)
                code=""
            pom=line.split("\t")

            asm+=pom[-1]+'\n'
        else:
            if asm!="":
                assembly.append(asm)
                asm=""
            code+=line
if code!="":
    kod.append(code)
    code=""
if asm!="":
    assembly.append(asm)
    asm=""
print len(assembly)
print len(kod)
if len(assembly)!=len(kod):
    print "GRESKA!"
else:
    for i in range(len(kod)):
        print "KOD:"
        print kod[i]
        print "ASSEMBLY"
        print assembly[i]
