#include<locale>
#include<iostream>
using namespace std;

int func(int x)
{
    if (x == 1) { return x; }
    x = x * func(x - 1);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите число\n";
    cin >> a;
    if (a > 16)
    {
        cout << "Слишком большое число.";
    }
    else if (a == 0)
    {
        cout << "1";
    }
    else
    {
        cout << func(a);
    }
}