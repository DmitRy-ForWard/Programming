import random
a = 1
c = 5
m = 0
i = 1
print("Игра называется угадай число, давай угадаем число)")
while i <= c:
    if a == 1 or a == 0:
        b = random.randint(0,100)
        print("Введите число, которое думаете верное")
    if a == 5:
        d = int(input())
        if d == b:
            print("Молодец, ты угадал")
            print("Хочешь ещё поиграть? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
        else:
            print ("Ты проиграл. Было загадано:",b)
            print ("Хочешь ещё поиграть? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
    else:
        d = int(input())
        m = m + 1
        if d == b:
            print("Молодец, ты угадал")
            print("Хочешь ещё поиграть? (1-Да)")
            if f == 1:
                c = m + 5
                a = 0
        else:
            if d > b:
                print("Почти, введите число меньше")
            else:
                print("Почти, введите число больше")
    a = a + 1
    i = i + 1