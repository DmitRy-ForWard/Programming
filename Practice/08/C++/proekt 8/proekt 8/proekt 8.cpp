#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    char f;
    cin >> a >> b >> c;

    switch (f)
    {
    case '-':
    {
        c = a - b;
        cout << c;
    }
    break;
    case '+':
    {
        c = a + b;
        cout << f;
    }
    break;
    case '*':
    {
        c = a * c;
        cout << f;
    }
    break;
    case '/':
        if (b == 0)
        {
            cout << "Некорректный ввод";
        }
        else
        {
            c = a / b;
            cout << f;
        }
        break;
    default:
    }
    return 0;
}
