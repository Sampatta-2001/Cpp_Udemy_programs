#include <iostream>
using namespace std;
int main()
{
    int n, rem, rev = 0;
    cout << "Enter the n:";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    cout << "The reverse is: " << rev;
}