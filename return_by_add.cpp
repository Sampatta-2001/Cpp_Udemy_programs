#include <iostream>
using namespace std;

int *fun(int size)
{
    int *p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    cout << p << endl;
    return p;
}

int main()
{
    int size;
    cin >> size;
    int *q = fun(size);
    cout << q << endl;
    for (int i = 0; i < size; i++)
    {
        cout << q[i] << endl;
    }
}