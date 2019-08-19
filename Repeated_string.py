import math
def repeatedString(s, n):
    x = math.floor(n/len(s))
    first_repeat = x*(s.count('a'))

    x = n%len(s)
    s = s[:x]
    second_repeat = s.count('a')
    repeation = first_repeat+second_repeat
    return repeation

s = input().strip()
n = int(input())
result = repeatedString(s, n)
print(result)

