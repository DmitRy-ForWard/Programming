from math import sqrt 
f = int(input("Введите 1 если дана сторона, введите 2 если дана координата"))            

if (f == 1):
    a = int(input("Первая сторона: "))
    b = int(input("Вторая сторона: "))
    c = int(input("Третья сторона: "))
    if ((a < b + c) and (b < a + c) and (c < a + b)):
        p = (a + b + c) / 2
        S = sqrt(p * (p - a) * (p - b) * (p - c))
        print("S = ", S)
    else:
        print("Такого треугольника не существует")
elif (f == 2):
    x1 = int(input("Координата x1: "))
    y1 = int(input("Координата y1: "))
    x2 = int(input("Координата x2: "))
    y2 = int(input("Координата y2: "))
    x3 = int(input("Координата x3: "))
    y3 = int(input("Координата y3: "))
    a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))
    b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)))
    c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)))
    if ((a < b + c) & (b < a + c) & (c < a + b)):
        p = (a + b + c) / 2
        S = sqrt(p * (p - a) * (p - b) * (p - c))
        print("S = ", S)
    else:
        print("Такого треугольника не существует")
else:
     print("Ошибка")   
