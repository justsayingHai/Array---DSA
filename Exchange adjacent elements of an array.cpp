#include <iostream>
using namespace std;

static const int maxSize = 30;

int main()
{
    int arr[maxSize] = { 20,40,50,60,30,80 };
    int n = 6;

    cout << "Original array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int temp;
    for (int i = 0; i < n - 1; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    cout << "Exchanged array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

