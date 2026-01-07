#include <iostream>
using namespace std;
int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int (*fptr)(int, int);
    fptr = max;
    (*fptr)(10, 5);

    fptr = min;
    (*fptr)(10, 5);
    return 0;
}