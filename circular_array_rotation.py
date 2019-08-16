import math
import os
import random
import re
import sys

def rotation(a,k,queries):
    k = k%len(a)
    a = a[len(a)-k:]+a[:len(a)-k]
    for _ in range(len(queries)):
        print(a[queries[_]])


if __name__ == "__main__":
    nkq = input().split()
    n = int(nkq[0])
    k = int(nkq[1])
    q = int(nkq[2])
    #takes , input , remove space , split and convert 
    #to integer and make a list and put them in a ]
    a = list(map(int,input().rstrip().split()))

    queries = []
    for _ in range(q):
        queries_item = int(input())
        queries.append(queries_item)
    rotation(a,k,queries)
