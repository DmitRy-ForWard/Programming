print("Введите число и диапазоны через пробел!")
m, l1, r1, l2, r2 = input().split(' ')
f = 0
m = int (f)
l1 = int (l1)
r1 = int (r1)   
r2 = int (r2)   
l2 = int (l2)   
if m > (r1 + r2) | m < (l1 + l2):
    print (-1, end = '')
else:
    if (m - l1) >= l2:
        if m <= (l1 + r2):
            print (l1, m - l1, end = '')
        else: 
            f = abs (m - (l1 + r2))
            if (l1 + f) < r1 & (r2 - z) > l2:
                print (l1 + f, m - (l1 + f), end = '')
            else: 
                print (-1, end = '')            
    else:
        print (-1, end = '')