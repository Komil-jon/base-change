def func():
    a = str(input('number: '))
    b = int(input('base: '))
    sum = 0
    for i in range(0,len(a)):
        current = a[len(a)-1-i]
        num = 0
        if current=='A':
            num = 10
        elif current=='B':
            num = 11
        elif current=='C':
            num = 12
        elif current=='D':
            num = 13
        elif current=='E':
            num = 14
        elif current=='F':
            num = 15
        else:
            try:
                num = int(current)
            except:
                return 'upto hexadecimal :('
        sum = sum + (b**i) * (num)
    return sum
print(func())

