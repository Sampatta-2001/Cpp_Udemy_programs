#include <iostream>

using namespace std;

int main()
{
    float basic;
    float P_o_A;
    float P_o_D;
    float Net_sal;

    cout << "Enter the basic: ";
    cin >> basic;

    cout << "Enter the Percentage of Allowances: ";
    cin >> P_o_A;

    cout << "Enter the Percentage of Deductions:: ";
    cin >> P_o_D;

    Net_sal = basic + basic * P_o_A/100 - basic * P_o_D/100;

    cout << "The Net slary is: " << Net_sal << endl;

    return 0;
}