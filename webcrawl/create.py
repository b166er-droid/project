import os
import urllib2
import os
import os.path

from HTMLParser import HTMLParser
parser=HTMLParser()
hdr = {'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11',
       'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
       'Accept-Charset': 'ISO-8859-1,utf-8;q=0.7,*;q=0.3',
       'Accept-Encoding': 'none',
       'Accept-Language': 'en-US,en;q=0.8',
       'Connection': 'keep-alive'}

start="https://www.codechef.com/"
try:
    os.mkdir("../baza_c_koda")
except OSError:
    pass
f=open("problems_and_solutions.txt")
problems=f.readline().strip().split(",")
solutions=[]
for i in range(len(problems)):
    solutions.append(f.readline().strip().split(","))
f.close()
broj=len(problems)
i=0
for solution in solutions:
    print i," : ",broj
    print solution[0]
    i=i+1
    try:
        os.mkdir("../baza_c_koda/"+solution[0])
    except OSError:
        pass
    k=0
    for sol in solution[1:]:
        #print vrti[i%4]
        fname="../baza_c_koda/"+solution[0]+"/"+solution[0]+str(k+1)+".c"
        if os.path.isfile(fname) :
            k=k+1
            continue
        page=None
        time=100
        while(page==None):
            req = urllib2.Request(start+sol, headers=hdr)
            try:
                page = urllib2.urlopen(req)
            except urllib2.HTTPError, e:
                print start+sol
                pass
            time-=1
            if time==0:
                break
        if page:
            code=page.read()[5:-6]
            k=k+1
            wcode=None
            try:
                wcode=parser.unescape(code)
            except UnicodeDecodeError:
                pass
            if wcode!=None:
                f=open("../baza_c_koda/"+solution[0]+"/"+solution[0]+str(k)+".c","w")
                f.write(parser.unescape(code))
                f.close()
