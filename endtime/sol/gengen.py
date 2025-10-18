#!/usr/bin/env python
from cyaron import *
import math
lim =1000
for id in range(0,10):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    n = m = lim
    td.input_writeln(n,m)
    for i in range(m):
        L = randint(1,n)
        st = randint(1,n-L+1)
        td.input_writeln(st,st+L-1)
    prf = randint(1,int(1e9))
    for i in range(n):
        k = randint(0,(i%10)+1)
        if(k==0): prf=randint(1,int(1e9))
        td.input_write(prf)
    td.output_gen("C:\\Users\\PacoLam\\Desktop\\dumb\\endtime\\sol\\sol.exe")
lim = 200000

for id in range(10,20):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    n = m = lim
    td.input_writeln(n,m)
    for i in range(m):
        L = randint(1,n)
        st = randint(1,n-L+1)
        td.input_writeln(st,st+L-1)
    prf = randint(1,int(1e9))
    for i in range(n):
        k = randint(0,(i%10)+1)
        if(k==0): prf=randint(1,int(1e9))
        td.input_write(prf)
    td.output_gen("C:\\Users\\PacoLam\\Desktop\\dumb\\endtime\\sol\\sol.exe")