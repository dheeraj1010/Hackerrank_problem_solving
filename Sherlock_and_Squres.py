import math
def square(a, b):
    a = math.sqrt(a)
    a = math.ceil(a)

    b = math.sqrt(b)
    b = math.floor(b)
    return (b-a+1)
    


if __name__ == "__main__":
    q = int(input())
    for _ in range(q):
        ab = input().split()
        a = int(ab[0])
        b = int(ab[1])
        result = square(a,b)
        print(result)    