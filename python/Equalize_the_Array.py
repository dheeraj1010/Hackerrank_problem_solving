def minDelete(n, arr):
    max = 0
    x = 0
    for number in arr:
        x = arr.count(number)
        if x>max:
            max = x
    result = n-max
    return result



n = int(input())
arr = list(map(int, input().strip().split()))
result = minDelete(n, arr)
print(result)