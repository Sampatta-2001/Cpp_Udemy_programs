#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    // cin >> str; //it read until space

    getline(cin, str);
    getline(cin, str);

    cout << str << endl;
}