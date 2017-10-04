import urllib2
import os
from HTMLParser import HTMLParser
parser=HTMLParser()
hdr = {'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11',
       'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
       'Accept-Charset': 'ISO-8859-1,utf-8;q=0.7,*;q=0.3',
       'Accept-Encoding': 'none',
       'Accept-Language': 'en-US,en;q=0.8',
       'Connection': 'keep-alive'}

problems=[]
vrti=["\\","|","/","-"]
solutions=[]
start="https://www.codechef.com/"
difficulty=["school","easy","medium","hard","challage","extcontest"]
#i=0
for dif in difficulty:
    #i+=1
    #print vrti[i%4]
    page=None
    try:
        page = urllib2.urlopen(start+"problems/"+dif)
    except urllib2.HTTPError, e:
        #print e.fp.read()
        pass
    if page:
        code=page.read()
        lines=code.split("\n")
        for line in lines:
            if " <a href=\"/problems/" in line:
                problem=line.strip().split("/")[2][:-2]
                problems.append(problem)
        #break
print problems[:10]
i=0
broj=len(problems)
for problem in problems:
    print i," : ",broj
    i+=1
    #print vrti[i%4]
    page=None
    while(page==None):
        try:
            page = urllib2.urlopen(start+"status/"+problem+"?sort_by=All&sorting_order=asc&language=11&status=15&handle=&Submit=GO")
        except urllib2.HTTPError, e:
            #print e.fp.read()
            print start+"status/"+problem
            pass
    if page:
        code=page.read()
        lines=code.split("\n")
        cntr=0
        solutions.append(list())
        solutions[-1].append(problem)
        for line in lines:
            if "<a href=\'/viewsolution/" in line:
                solution=line.strip().split("/viewsolution/")[1].split("\'")[0]
                solutions[-1].append("viewplaintext/"+solution)
                cntr+=1
            if cntr==10:
                break
        #break
f=open("problems_and_solutions.txt","w")
f.write(",".join(problems))
f.write("\n")
for solution in solutions:
    f.write(",".join(solution))
    f.write("\n")
f.close()
