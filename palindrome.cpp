#include <iostream>
using namespace std;
int main()
{
    int n, rem, rev = 0;
    cout << "Enter the n:";
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    // cout << "The reverse is: " << rev;

    return 0;
}