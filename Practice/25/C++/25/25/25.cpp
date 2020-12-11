#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

enum SortOrder
{
    ASC,
    DESC
};

void swapElements(int& element1, int& element2)
{
    int tempVar = element1;
    element1 = element2;
    element2 = tempVar;
}

bool isElementsSorted(int d, int f, SortOrder sortOrder)
{
    if (sortOrder == ASC)
    {
        return d <= f;
    }
    else
    {
        return d >= f;
    }
}

bool isArraySorted(int* arr, int m, SortOrder sortOrder)
{
    for (int i = 0; i < m - 1; i++)
    {
        if (!isElementsSorted(arr[i], arr[i + 1], sortOrder))
        {
            return false;
        }
    }

    return true;
}

int* shuffleElements(int* arr, int k)
{
    while (k > 1)
    {
        int r = rand() % k;
        k -= 1;
        swapElements(arr[r], arr[k]);
    }

    return arr;
}

int* bozoSort(int* arr, int g, SortOrder sortOrder)
{
    while (!isArraySorted(arr, g, sortOrder))
    {
        arr = shuffleElements(arr, g);
    }

    return arr;
}

int* fillArray(int* arr, int h)
{
    for (int a = 0; a < h; a++)
    {
        cout << "arr[" << a << "] = ";
        cin >> arr[a];
    }

    return arr;
}

void printArray(int* arr, int n)
{
    for (int b = 0; b < n; b++)
    {
        cout << arr[b] << " ";
    }
}

int main(int argc, char** argv)
{
    srand(time(NULL));

    int* arr;
    int size;

    cout << "n = ";
    cin >> size;

    arr = new int[size];
    arr = fillArray(arr, size);

    arr = bozoSort(arr, size, ASC);

    printArray(arr, size);

    delete arr;

    cout << endl;
    system("pause");
    return 0;
}
