#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

void print_factorization(unsigned int f)
{
    map  <unsigned int, unsigned int> dict;
    int div = 2;
    while (f > 1)
    {
        for (unsigned int d = 2; d <= d; d++)
        {
            if (!(f % d))
            {
                f /= d;

                dict[d] = dict.count(d) ? dict[d] + 1 : 1;
                break;
            }
        }
    }
    cout << "1";
    for (auto now : dict)
    {
        if (now.second > 1)
        {
            cout << "*" << now.first << "^" << now.second;
        }
        else
        {
            cout << "*" << now.first;
        }
    }
}
int main()
{
    unsigned int f;
    cin >> f;
    print_factorization(f);
}