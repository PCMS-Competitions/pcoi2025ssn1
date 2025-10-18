#!/usr/bin/env python
from cyaron import *
import math
lim =100
def ask(x):
    ret=0
    while(x!=1):
        if(x%2==0):
            x=x/2
        else:
            x=x*3+1
        ret+=1
    return ret
for id in range(0,10):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    n = randint(1,100)
    td.input_write(n)
    td.output_write(ask(n))