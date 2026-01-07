#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the n : ";
    cin >> n;

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Its a prime";
    }
    else
    {
        cout << "Its not a prime";
    }

    return 0;
}