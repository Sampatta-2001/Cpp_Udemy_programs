#include <iostream>

using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter the n:";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r * r * r;
    }
    if (sum == m)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}
