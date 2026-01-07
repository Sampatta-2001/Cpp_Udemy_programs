#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1, r2;

    r1.length = 10;
    r1.breadth = 5;
    cout << "Area is: " << r1.area() << endl;           // 50
    cout << "Perimeter is: " << r1.perimeter() << endl; // 30
    r2.length = 15;
    r2.breadth = 10;
    cout << "Area is: " << r2.area() << endl;           // 150
    cout << "Perimeter is: " << r2.perimeter() << endl; // 50
    return 0;
}
