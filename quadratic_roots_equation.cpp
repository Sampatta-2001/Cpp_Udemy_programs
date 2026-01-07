#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    float r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Root square: " << r1 << " " << r2 << endl;
}