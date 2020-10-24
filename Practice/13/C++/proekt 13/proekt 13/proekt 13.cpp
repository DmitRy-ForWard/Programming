#include <locale>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите число\n";
    cin >> a;
    b = 1;
    c = 1;
    for (int i = 2; i < a; i++)
    {
        ++c;

        if ((a % c) == 0)
        {
            std::cout << "Составное число";
            b = c;
            a = c;
        }
    }
    if (b == 1)
    {
        cout << "Простое число";
    }
}