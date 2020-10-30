d = 0
f = 0
m = 'Ответ:'
print("Введите количество билетов")
k = int(input())
print("Введите билеты")
while f < k:
    a = str(input())
    if a[0] == 'a' and a[4] == '5' and a[5] == '5' and a[6] == '6' and a[7] == '6' and a[8] == '1':
        m = m + ' ' + a
    else:
        d = d + 1
    f = f + 1
if d == k:
    print("-1")
else:
    print(m)