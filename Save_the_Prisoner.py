import math
import os
import random
import re
import sys
def prisoner_number(n,m,s):
    result = (m+s-1)%n
    if result==0:
        result = result+n;
    return result



if __name__ == "__main__":
    t = int(input())

    for t_itr in range(t):
        nms = input().split()

        n = int(nms[0])

        m = int(nms[1])

        s = int(nms[2])

        result = prisoner_number(n,m,s)
        print(result)
        
    
