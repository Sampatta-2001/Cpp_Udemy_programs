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
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "The found at: " << i;
            exit(0);
        }
    }
    cout << "Not found";
}