#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, f, m;
	cout << "Введите время прихода 1 человека через пробел.\n";
	cin >> a >> b;
	cout << "Введите время прихода 2 человека через пробел.\n";
	cin >> c >> d;
	if ((a <= 23) && (a >= 0) && (b <= 59) && (b > 0) && (c <= 23) && (c >= 0) && (d <= 59) && (d > 0));
	{
		f = abs(a - c);
		m = abs(b - d);
		if (((f == 0) && (m <= 15)) || ((f == 1) && (m >= 45)) || ((f == 23) && (m >= 45)));
		{
			cout << "Встреча состоиться";
		}
		else if
		{
			cout << "Встреча не состоиться";
		}
	}
}
