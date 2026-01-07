#include <iostream>
using namespace std;

int main()
{
    string email;
    cout << "Enter the string: ";
    getline(cin, email);

    int i = (int)email.find('@');
    string uname = email.substr(0, i);

    cout << "User Name is: " << uname << endl;
    return 0;
}