from subprocess import call
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

for line in output:
    #print literal_eval(line)
