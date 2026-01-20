#include <iostream>
using namespace std;

static const int maxSize = 30;

int main()
{
    int arr[maxSize] = { 20,40,50,60,30,80 };
    int n = 6;
    
    int largest, second_largest;
    largest = second_largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << second_largest << endl;

    return 0;
}


