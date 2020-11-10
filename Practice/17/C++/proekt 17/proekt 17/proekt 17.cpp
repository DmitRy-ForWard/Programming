#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	const int k = 37;
	int a[k];
	int x = 0;
	int y = 0;
	int d = 0;
	int w = 0;
	for (int f = 0; f < k; f++)
	{
		a[f] = 0;
	}
	int red[18] = { 1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36 };
	while (1)
	{
		cin >> x;
		if (x < 0)
		{
			break;
		}
		else
		{
			a[x]++;
			for (int f = 0; f <= 17; f++)
			{
				if (x == red[f])
				{
					y++;
					break;
				}
				else if (f == 17)
				{
					w++;
				}
			}
		}
		for (int f = 0; f < k; f++)
		{
			if (a[f] > d) d = a[f];
		}
		for (int f = 0; f < k; f++)
		{
			if (a[f] == d) cout << f << " ";
		}
		cout << endl;
		for (int f = 0; f < k; f++)
		{
			if (a[f] == 0) cout << f << " ";
		}
		cout << endl << "Красные: " << y << " Черные: " << w << endl;
	}
}