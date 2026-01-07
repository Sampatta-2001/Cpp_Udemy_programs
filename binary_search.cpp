#include <iostream>
using namespace std;

int main()
{
    int A[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int low = 0, high = 9, key, mid;

    cout << "Enter the key: ";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == A[mid])
        {
            cout << "Found at" << mid;
            return 0;
        }
        else if (key < A[mid])
        {
            high = mid - low;
        }
        else
        {
            low = mid + low;
        }
    }
    cout << "Not Found";
    return 0;
}
