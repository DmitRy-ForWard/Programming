#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int *create(int const size, const int start, const int step)
{
    int* rae = new int[size];
    *rae = start;
    for (int i = 1; i < size; i++)
    {
        rae[i] = rae[i-1]  + step;
    }
    return rae;
}

void sort(int* rae_bdn, const int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0 && rae_bdn[j - 1] > rae_bdn[j]; j--)
        {
            int temp = rae_bdn[j-1];
            rae_bdn[j-1] = rae_bdn[j];
            rae_bdn[j] = temp;
        }
    }
}

void print(int *rae_bdn, const int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i<size-1)
        {
            cout << rae_bdn[i] << " ";
        }
        else
        {
            cout << rae_bdn[i];
        }
    }
    cout << "]";
}


int main()
{
    int size, step = 0, start = 0;

    cout << "Enter the size, start and step of the arithmetic progression" << endl;
    cin >> size >> start >> step;

    int* rae_bdn = create(size, start, step);

    create(size,start, step);
    sort(rae_bdn, size);
    print(rae_bdn, size);
    delete[]rae_bdn;
    cin.get();
    return 0;
}
