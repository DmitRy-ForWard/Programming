#include<iostream>
#include<cmath>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите числа и диапозон через пробел\n: ";
    int m, f, l1, r1, l2, r2, x1, x2;
    f = 0;
    x1 = 0;
    x2 = 0;
    cin >> m >> l1 >> r1 >> l2 >> r2;
    if ((m > (r1 + r2)) || (m < (l1 + l2)))
    {
        cout << -1;
    }
    else
    {
        if ((m - l1) >= l2)
        {
            if (m <= (l1 + r2))
            {
                cout << l1 << " " << m - l1;
            }
            else
            {
                f = abs(m - (l1 + r2));
                if ((l1 + f) < r1 && (r2 - f) > l2)
                {
                    cout << l1 + f << " " << m - (l1 + f);
                }
                else
                {
                    cout << -1;
                }
            }
        }
        else
        {
            cout << -1;
        }
    }
}