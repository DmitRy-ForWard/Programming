print ("Введите число")
a = int(input())
b = 1
c = 1
if a < 0:
    print("Введите полож. число")
elif a == 0:
    print ("1")
else:
    while b <= a:
        c = c * b
        b = b + 1
    print(b)