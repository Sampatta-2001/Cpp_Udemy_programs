#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter Your Name: ";
    // cin >> str;
    getline(cin, str);

    cout << "Welcome " << str << endl;
    return 0;
}