import math
import os
import random
import re
import sys
def JumpingOnClouds(n,k,c):
    i = 1
    e = 100
    current_cloud = 0
    while i>0:
        current_cloud = (current_cloud+k)%n
        #print('current cloud   ')
        #print(current_cloud)
        if c[current_cloud] ==0:
            e = e-1
            #print("energy")
            #print(e)
        else:
            e = e-3
            #print('enrgy  ')
            #print(e)
        i = current_cloud
        #print('i')
        #print(i)
    print(e)    

           
        

if __name__ == "__main__":
    nk = input().split()
    n = int(nk[0])
    k = int(nk[1])
    c  = list(map(int,input().rstrip().split()))
    JumpingOnClouds(n,k,c)
    