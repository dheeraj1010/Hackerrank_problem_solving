import math
def FindDigits(n):
    #print("n {}".format(n))
    result = 0
    copy_n = n
    while copy_n>0:
        digit = copy_n%10
        copy_n = math.floor(copy_n/10)
        #print('digit')
        #print(digit)
        if digit!=0:
            if n%digit==0 :
                result = result +1
    return result            



if __name__ == "__main__":
        t = int(input())
        for _ in range(1,t+1):
            n = int(input())
            #print('n  ')
            #print(n)
            result = FindDigits(n)
            print(result)
