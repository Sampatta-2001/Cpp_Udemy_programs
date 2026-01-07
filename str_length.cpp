#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str = "WELCOME";
    // int count = 0;

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     count++;
    // }

    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }
    cout << "Length is " << count << endl;

    return 0;
}