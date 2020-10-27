#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d, f, m;
    a = 1;
    c = 5;
    m = 0;
    cout << "Игра называется угадай число, давай угадаем число)" << endl;
    for (int i = 1; i <= c; i++) {
        if ((a == 1) || (a == 0)) {
            srand(time(0));
            b = 1 + rand() % 100;
        }
        cout << "Введите число, которое думаете верное" << endl;
        if (a == 5) 
        {
            cin >> d;
            cout << endl;
            if (d == b) 
            {
                cout << "Молодец, ты угадал" << endl << "Хочешь ещё поиграть? (1-Да)" << endl;
                cin >> f;
                if (f == 1) 
                {
                    c = c * 2;
                    a = 0;
                }

            }
            else 
            {
                cout << "Ты проиграл. Было загадано:" << b << endl << "Хочешь ещё поиграть? (1-Да)" << endl;
                cin >> f;
                if (f == 1) 
                {
                    c = (c * 2) + 1;
                    a = 0;
                }


            }

        }
        else {
            cin >> d;
            cout << endl;
            m++;
            if (d == b) 
            {
                cout << "Молодец, ты угадал" << endl << "Хочешь ещё поиграть? (1-Да)" << endl;
                cin >> f;
                if (f == 1) 
                {
                    c = m + 5;
                    a = 0;
                }

            }
            else 
            {
                if (d > b) 
                {
                    cout << "Почти, введите число меньше" << endl;


                }
                else 
                {
                    cout << "Почти, введите число больше" << endl;
                }

            }

        }
        a++;
    }
}