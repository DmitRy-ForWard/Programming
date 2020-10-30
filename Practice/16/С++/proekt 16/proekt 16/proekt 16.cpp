#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int d, m, f;
    bool o = true;
    f = 0;
    cout << "Введите количество билетов\n";
    cin >> m;
    cout << "Введите билеты через пробел\n";
    string a{};
    for (d = 1; d <= m; d++)
    {
        cin >> a;
        if (a[0] == 'a' && a[4] == '5' && a[5] == '5' && a[6] == '6' && a[7] == '6' && a[8] == '1')
        {
            cout << a << ' ';
            o = false;
        }
        else
        {
            f = f + 1;
        }
    }
    if (f == m)
    {
        cout << "-1";
    }
    return 0;
}