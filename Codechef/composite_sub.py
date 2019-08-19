def reverse_ascii(x):
    x = x-65
    return x

def ascii(x):
    x = x+65
    return x

cipher_text = list(input().strip())
k1 = int(input())
k2 = int(input())
cipher_text = list(map(ord, cipher_text))
cipher_text = list(map(reverse_ascii, cipher_text))

#print(cipher_text)
#print(k1)
#print(k2)

k2_inverse = 1
while ((k2_inverse*k2)%26)!=1:
    k2_inverse +=1
#print(k2_inverse)
plain_text = []
for c in cipher_text:
    p = ((c-k1)*k2_inverse)%26
    #print("p   {}".format(p))
    #print("C = {}, K1 = {}, C-K1 = {}".format(c,k1,c-k1))
    #print("(c-k1)*k2_inverse = {} ".format((c-k1)*k2_inverse))
    #print("(c%26 = {}".format(((c-k1)*k2_inverse)%26))
    plain_text.append(p)
#print(plain_text)
plain_text = list(map(ascii, plain_text))
#print(plain_text)
plain_text = list(map(chr, plain_text))
plain_text = "".join(plain_text)

print(plain_text)
