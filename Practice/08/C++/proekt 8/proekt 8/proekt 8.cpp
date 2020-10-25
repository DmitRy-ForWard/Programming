#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    char f;
    cin >> a >> f >> b;

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
        cout << c;
    }
    break;
    case '*':
    {
        c = a * b;
        cout << c;
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
            cout << c;
        }
        break;
      
    default:
          cout << "Некорректный ввод";
    }
    return 0;
}
