#include <iostream>

using namespace std;

int factorial(int n) 
{
	if (n > 10) exit(1);
		if (n < 0) return 1;
		return n < 1 ? 1 : n * factorial(n - 1);
}
int main() 
{
	cout << "n: ";	
		int n;
		cin >> n;
			cout << factorial(n) << endl;
	system("pause");
}