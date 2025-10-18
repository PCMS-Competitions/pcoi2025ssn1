#!/usr/bin/env python
from cyaron import *
import math
lim = 5000000
for id in range(0,10):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    n = randint(1, lim)
    k = randint(1, lim)
    print(id, n, k)
    td.input_writeln(n,k)
    td.output_gen("sol/sol")

lim = 10**16
for id in range(10,20):
    td = IO(f"input/input{id}.txt",f"output/output{id}.txt")
    n = randint(5000000, lim)
    k = randint(5000000, lim)
    print(id, n, k)
    td.input_writeln(n,k)
    td.output_gen("sol/sol")
