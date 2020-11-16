#include <iostream>

using namespace std;

void mysin(double x, double eps)
{
    double y, s, an;
    int n;
    n = 1;
    an = x;
    s = 0;
    while (fabs(an) > eps)
    {
        s += an;
        n++;
        an *= -x * x / (2. * n - 1.0) / (2.0 * n - 2.0);
    }
    cout << "sin(x) =" << s;
    y = s / x;
    cout << endl << "sin(x)/x = " << y;
}

int main(double x, double esp)
{
    cin >> x; cin >> esp;
    mysin(x, esp);
    return 0;
}