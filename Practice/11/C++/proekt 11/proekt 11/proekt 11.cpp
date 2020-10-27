#include<iostream>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, f;
    cout << "Введите число\n";
    cin >> a;
    cout << "Введите степень, в которую хотите возвести число\n";
    cin >> b;
    c = a;
    if (b > 0)
    {
        for (f = 1; f < b; f++)
        {
            c = c * a;
        }
    }
    if (b < 0)
    {
        c = 1;
        for (f = 0; f > b; f--)
        {
            c = c * (1 / a);
        }
    }
    if (b == 0)
    {
        c = 1;
    }
    cout << c;
    return 0;
}