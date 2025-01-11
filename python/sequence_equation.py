import math
import os
import random
import re
import sys
def sequence_equation(n,p):
    x = []
    for i in range(1,n+1):
        #print("i = ")
        #print(i)
        if i in p:
            pox_in = p.index(i)+1
            #print("pox_in = ")
            #print(pox_in)
        if pox_in in p:
            y = p.index(pox_in)+1
            #print("y =  ")
            #print(y)
        if i in p and pox_in in p:    
            x.append(y)
    print('\n'.join(map(str,x)))


if __name__ == "__main__":
    n = int(input())
    p = list(map(int,input().rstrip().split()))
    sequence_equation(n,p)
