#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathmarks;
    int phymarks;
    int chemmarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathmarks = m;
        phymarks = p;
        chemmarks = c;
    }

    int total()
    {
        return mathmarks + phymarks + chemmarks;
    }
    char grade()
    {
        float avg = total() / 3;
        if (avg > 60)
            return 'A';
        else if (avg >= 40 && avg <= 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student: ";
    cin >> roll;
    cout << "Enter Name of a Student:";
    cin >> name;
    cout << "Enter marks in 3 subjects";
    cin >> m >> p >> c;
    Student s(roll, name, m, p, c);
    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade of Student:" << s.grade() << endl;
}