from math import ceil

def d(n):
        f = 0
        for i in range (1,int(ceil(n/2)+1)):
                if n%i is 0:
                        f+=i
        return f

sum = 0
for a in range(1,10000):
        b = d(a)
        if a == d(b) and a != b:
                sum += a
print sum