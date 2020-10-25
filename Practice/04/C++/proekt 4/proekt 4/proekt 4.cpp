#include <iostream>
#include <locale>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "Russian");
    int a = 3;
    int b = 5;
    int c;
    cout << "Посчитать с помощью переменной введите 1, без дополнительной переменной введите 2\n";
    cin >> c;
    if (c == 1)
    {
        c = a;
        a = b;
        b = c;
        cout << "Первое число " << a << " Второе число " << b;
    }
    else
    {
        a = b - a;
        b = b - a;
        a = b + a;
        cout << "Первое число " << a << " Второе число " << b;
    }
}