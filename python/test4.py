
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    i = 0;
    last_post = 0;
    current_post = 0;
    valley = 0
    while i<n:
        if s[i]=='U':
            last_post = current_post
            current_post = current_post+1
        elif s[i]=='D':
            last_post = current_post
            current_post = current_post-1
        i = i+1
        if last_post ==0 and current_post ==-1:
            valley = valley+1
    return valley         
               


    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
