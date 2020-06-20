import math
total=1

def prime(n):
    if(n==2):
        return True
    if(not n%2):
        return False
    else:
        for i in range(3,int(math.sqrt(n))+1,2):
            if(not n%i):
                return False
    return True
    
def rotate(l):
    l.insert(0,l.pop())
    return (check(l))
    
def check(l):
    n=0
    for k in l:
        n=n*10+int(k)
    if(prime(n)):
        return True
    return False

for i in range(3,1000000,2):  
    flag=True
    evenflag=False
    even=[2,4,6,8,0]
    l=list(str(i))
    for k in even:
        if(str(k) in l):
            evenflag=True
            break;
    if(evenflag):
        continue      
    for k in range(len(l)):
        if(not rotate(l)):
            flag=False
            break              
    if(flag):
        total+=1
print total