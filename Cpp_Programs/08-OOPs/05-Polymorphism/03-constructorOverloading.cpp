#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    // non-parameterized constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // copy constructor
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }
};

int main()
{
    Rectangle r1;        // non-parameterized constructor
    Rectangle r2(10, 5); // parameterized constructor
    Rectangle r3(r2);    // copy constructor

    cout << "Length of r1 is " << r1.length << endl;
    cout << "Breadth of r1 is " << r1.breadth << endl;
    cout << "Length of r2 is " << r2.length << endl;
    cout << "Breadth of r2 is " << r2.breadth << endl;
    cout << "Length of r3 is " << r3.length << endl;
    cout << "Breadth of r3 is " << r3.breadth << endl;

    return 0;
}
