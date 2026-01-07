#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    sum = num * (num + 1) / 2;
    cout <<  "Sum of natural numbers: " << sum << endl;
    return 0;
}