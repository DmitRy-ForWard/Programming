#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a, b;
    cout << "Ввести первое число";
    cin >> a;
    cout << "Ввести второе число";
    cin >> b;
    cout << "\n Сумма равна" << a + b << "\n Разность равна" << a - b << "\n Произведение равно" << a * b << "\n Частное равно" << a / b << endl;
    
    double c, d;
    cout << "Введите первое число";
    cin >> c;
    cout << "Введите второе число";
    cin >> d;
    cout << "\n Сумма равна" << c + d << "\n Разность равна" << c - d << "\n Произведение равно" << c * d << "\n Частное равно" << c / d << endl;

    int f;
    double m;
    cout << "Ввести первое число";
    cin >> f;
    cout << "Ввести второе число";
    cin >> m;
    cout << "\n Сумма равна" << f + m << "\n Разность равна" << f - m << "\n Произведение равно" << f * m << "\n Частное равно" << f / m << endl;

    double g;
    int k;
    cout << "Ввести первое число";
    cin >> g;
    cout << "Ввести второе число";
    cin >> k;
    cout << "\n Сумма равна" << g + k << "\n Разность равна" << g - k << "\n Произведение равно" << g * k << "\n Частное равно" << g / k << endl;
}