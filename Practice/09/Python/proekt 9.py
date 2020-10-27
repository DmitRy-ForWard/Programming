from math import fabs
a,b = input().split(':')
c,d = input().split(':')
a = int(a)
b = int(b)
c = int(c)
d = int(d)
if a <= 23 and a >= 0 and b <= 59 and b > 0 and c <= 23 and c >= 0 and d <= 59 and d > 0:
    f = fabs(a-c)
    m = fabs(b-d)
    if f == 0 and m <= 15 or f == 1 and m >= 45 or f == 23 and m >= 45:
        print("Встреча состоиться")
    else:
        print("Встреча не состоиться")
    
else:
    print("Неверные числа")