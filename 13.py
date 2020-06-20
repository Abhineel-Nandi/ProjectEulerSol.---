num = "3710..."

l = []
i = 0
while i < 5000:
        j = i + 50
        l.append(num[i:j])
        i = i + 50

sum = 0
for x in l:
        sum = sum + int(x)

sum = str(sum)
print "Answer:", sum[:10]