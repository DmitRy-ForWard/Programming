print("Введите число")
a = int(input())
b = 1
f = 2
m = 2
while m < a:
    if (a % f) == 0:
        print ("Составное число")
        b = f
        a = f
    f = f + 1
    m = m + 1
if b == 1:
    print ("Простое число")