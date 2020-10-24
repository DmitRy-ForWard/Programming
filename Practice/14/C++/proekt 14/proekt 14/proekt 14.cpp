#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int  a, b, c;
	double d, f;
	cout << "Введите число" << endl;
	cin >> c;
	f = 0;
	d = 0;
	b = 0;
	for (a = 1; a <= c; a++) {
		d = pow(2, f);
		if ((f <= c) && (d <= c)) {
			b++;
		}
		else {
			c = f;
		}
		f++;
	}
	cout << b;
}