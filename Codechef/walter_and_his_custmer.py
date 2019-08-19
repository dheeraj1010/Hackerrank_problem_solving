import math
import os
import random
import re
import sys
n = int(input())
arr = list(map(int, input().strip().split()))
result = 0
for i in range(0,n):
    if arr[i]==0:
        continue
    elif ((arr[i]%2==0) and (arr[i]%3==0) and (arr[i]%5!=0)):
        result =result+1
    else:
        continue
print(result)
