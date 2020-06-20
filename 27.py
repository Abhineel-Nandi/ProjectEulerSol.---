def p27():
    p = get2max(1000)
    p2 = get2max(25000)
    m = 0
    mi = 0
    d = 0
    for j in range(1,len(p)-1):
        for i in range (1, len(p)):
            k = p[i] - p[j]
            d = k + 2
            l = p[i]
            t = 0
            while isprime(l+d): #cached prime list
                l += d
                d += 2
                t += 1
            if t >= m :
                m = t
                mi,mj = i,j
    return mj, mi , m, p[mj], p[mi]
 
