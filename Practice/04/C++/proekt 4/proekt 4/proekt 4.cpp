#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 5;

    int temp;

    temp = a;
    a = b;
    b = temp;

    
    int c = 6;
    int d = 4;

    c = c + d;
    d = d - c;
    d = -d;
    c = c - d;
}