#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the n: ";
    cin >> n;
    // while loop

    // int i = 1;
    // while (i <= 10)
    // {
    //     cout  << i * n << endl;
    //     i++;
    // }

    // for loop
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "X" << i << "=" << i * n;
        cout << endl;
    }
}
