#include <iostream>
#include <string>
#include <cmath>
#include <locale>

using namespace std;

void create(int **rae_bdn, int const size, const int start, const int step)
{
    int* rae = new int[size];
    *rae = start;
    for (int i = 1; i < size; i++)
    {
        rae[i] = rae[i-1] + step;
    }
    *rae_bdn = rae;
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
void print(int* rae_bdn, const int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
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
void destroy(int**rae_bdn)
{
    delete[]*rae_bdn;
    *rae_bdn = nullptr;
}
int main()
{
    setlocale(LC_ALL, "Russian");

    int size, step = 0, start = 0;

    cout << "Введите размер начало и шаг арифметической прогрессии" << endl;
    cin >> size >> start >> step;
    int *rae_bdn;

    create(&rae_bdn, size, start, step);
    sort(rae_bdn, size);
    print(rae_bdn, size);
    destroy(&rae_bdn);

    cin.get();
    return 0;
}
