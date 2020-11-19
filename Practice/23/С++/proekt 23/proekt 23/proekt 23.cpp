#include <iostream> 
#include <iomanip> 
#include "Factorial.h" 
#include "Trelor.h" 
#include "Three.h"
using namespace std;

int main() 
{
	cout << "n" << "\t" << "n!\n";
	for (int n = 1; n <= 10; n++) 
	{
		cout << n << "\t" << Factorial(n) << "\n";
	}
	cout << "\n";

	float p = 3.14;
	cout << "x" << "\t" << "sin(x)\n";
	for (float x = 0; x <= p / 4; x = x + p / 180) 
	{
		cout << x << "\t" << std::setprecision(4) << Trelor(x) << "\n";
	}
	cout << "\n";

	int n = 10;
	cout << "k" << "\t" << "c(k, 10)\n";
	for (int k = 1; k <= n; k++) 
	{
		cout << k << "\t" << Three(k, n) << "\n";
	}
}