#include <iostream>
using namespace std;

int g = 5;

void fun()
{
    int a = 10;
    {
        int a = 0;
        a++;
        cout << a << endl;
    }
    cout << a << endl;
}

int main()
{
    cout << g << endl;
    fun();

    //cout << g << endl;
}