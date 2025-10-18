#!/usr/bin/env python
from cyaron import *
import math
lim =1000
for id in range(0,10):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    a= randint(-lim,lim)
    b= randint(-lim,lim)
    n = randint(-lim,lim)
    while(n==0): n=randint(-lim,lim)
    A= a*n-b
    B= a*n*n-b*(n-1)
    td.input_write(A,B,n)
    td.output_write(a,b)
lim = 500000
for id in range(10,20):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    a= randint(-lim,lim)
    b= randint(-lim,lim)
    n = randint(-lim,lim)
    while(n==0): n=randint(-lim,lim)
    A= a*n-b
    B= a*n*n-b*(n-1)
    td.input_write(A,B,n)
    td.output_write(a,b)