#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int arr[size];
    int largest = arr[0];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Maximum no is " << largest;
}