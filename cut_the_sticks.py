
import math
import os
import random
import re
import sys

def cutTheStciks(n, arr):
    #print("n   {}".format(n))
    #print("arr   {}".format(arr))

    stcik_cut = 0
    index = 0
    arr = sorted(arr)
    #print("sorted array   {}".format(arr))
    #print("arr[0]   {}".format(arr[0]))

    result = []
    result = list(result)
    while arr[0]>0 :
        stcik_cut = 0
        #print("arr[0] =   {} ".format(arr[0]))
        index = 0
        shortest_stick = arr[0]
        for i in range(0,len(arr)):
            arr[i] = arr[i] - shortest_stick
            #print("arr[i]  shortest stick   {}  {}".format(arr[i],shortest_stick))
            stcik_cut = stcik_cut+1
            #print("stcik cut = {}".format(stcik_cut))
            if arr[i]==0:
                index = i
        result.append(stcik_cut)
        #print("index before cutting : {}".format(index))
        arr = arr[index-len(arr)+1:]
        #print("cut arr {}".format(arr))
    result = "\n".join(map(str,result))    
    return result




if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().rstrip().split()))
    result = cutTheStciks(n,arr)
    print(result)