#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    // int A[size];
    // cout << sizeof A << endl;

    int *p = new int[size];

    cout << "Enter new size: ";
    cin >> size;

    return 0;
}