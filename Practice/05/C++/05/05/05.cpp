#include<cmath>
#include <iostream>
#include<locale>	
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double g, c,t,x0,v0,x;
	cin >> x0 >> v0 >> t;
	g = 9.8;
	x = abs(x0 + v0 * t - ((g * t * t) / 2));
	cout << x;
}
