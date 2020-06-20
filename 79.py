def read_logins():
    f = open("keylog.txt")
    l = f.read().split('\n')
    f.close()
    return l

def get_digits(logins):
    digits = set()
    result = []
    for login in logins:
        for digit in login:
            if digit not in digits:
                result.append(digit)
                digits.add(digit)
    return result

def compare(logins, d1, d2):
    for login in logins:
        if d1 in login and d2 in login:
            i1 = login.find(d1)
            i2 = login.find(d2)
            if i1 < i2:
                return -1
            elif i1 > i2:
                return +1
            else:
                raise Exception, "Invalid comparison for " + d1 + "," + d2
                
def sort_digits():
    logins = read_logins()
    digits = get_digits(logins)
    for i in range(0, len(digits)-1):
        for j in range(i+1, len(digits)):
            comp = compare(logins, digits[i], digits[j])
            if comp > 0:
                digits[i], digits[j] = digits[j], digits[i]
    return digits

digits = sort_digits()
print digits