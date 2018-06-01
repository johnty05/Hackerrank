#!/bin/python3

import os
import sys

n,m=input().rstrip().split()
a=[int(x) for x in input().strip().split()]
b=[int(y) for y in input().strip().split()]

count = 0
for i in range(max(a),min(b)+1):
    for j in a:
        if i%j!=0: break
    else:
        for k in b:
            if k % i != 0: break
        else: count+=1
print(count)
