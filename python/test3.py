#!/bin/python3

import os
import sys
import math

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    #from front side
    fron = math.ceil((p-1)/2)
    #from back side
    if p%2 ==0:
        back = math.floor((n-p)/2)
    else:
        back = math.ceil((n-p)/2)

    #comparing both numbeif  
    if fron<back:
        return fron
    else:
        return back       

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
