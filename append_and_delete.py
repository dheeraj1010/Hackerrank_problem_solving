import math
import os 
import random
import re
import sys
def appendAndDelete(s, t, k):
    small_len = 0
    v = 1
    operation = 0
    if len(s)>len(t):
        small_len= len(t)
        #print('small_len   ')
        #print(small_len)
    else:
        small_len = len(s)
        #print('small_len')
        #print(small_len)

    for i in range(0,small_len) :
        #print('i   ')
        #print(i)
        if s[i]==t[i]:
            continue    
        else:
            ind = i
            #print('index    ')
            #print(ind) 
            v = 0   
            break   

    if v ==0 or len(s)!=len(t):
        operation = len(s)-i+len(t)-i
    #print("operation  {}".format(operation))
    #print("k   {}".format(k)) 
    if operation<k and (len(s)+len(t))<=k:   
        operation =k
    #print("operation  {}".format(operation))
    #print("k   {}".format(k))    
    if operation<k and (operation-k)%2==0:
        operation = k


        #checking the final condition of opertaion
    #print(operation)
    if operation == k:
        return 'Yes'    
    else:
        return 'No'    
            


if __name__ == "__main__":
    s = input().strip()
    t = input().strip()
    k = int(input())
    result = appendAndDelete(s,t , k)
    print(result)
