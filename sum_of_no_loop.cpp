#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the n: ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     //sum = sum + i;
    //     sum += i;
    // }
    // cout << "The sum of natural numbers is " << sum << endl;

    // while loop
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum of n no is: " << sum << endl;
}