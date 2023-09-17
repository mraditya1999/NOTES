// scope resolution shows tthat thw scope of a function is limited to the class in which it is defined.
// There are two ways to define a function in a class.
// 1. We can write definition of functions in a class.
// 2.We write only prototypes of functions in a class.
// We write definition of functions outside the class by using scope resolution operator(::).
// The main  difference between the two ways is that in the first way, we can define functions in any order but in the second way, we have to follow the order of declaration of functions in a class.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();                // non-parameterized constructor
    Rectangle(int l, int b);    // parameterized constructor
    Rectangle(Rectangle &rect); // copy constructor
    void setLength(int l);      // mutators function
    void setBreadth(int b);     // mutators function
    int getLength();            // accessors function
    int getBreadth();           // accessors function
    int area();                 // facilitator function
    int perimeter();            // facilitator function
    bool isEqual();             //  inspector function
    ~Rectangle();               // destructor function
};

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length = rect.length;
    breadth = rect.breadth;
}

void Rectangle::setLength(int l)
{
    if (l > 0)
        length = l;
    else
        cout << "Length cannot be negative";
}
void Rectangle::setBreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
        cout << "Breadth cannot be negative";
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isEqual()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Destructor called";
}

int main()
{
    Rectangle r1;        // non-parameterized constructor
    Rectangle r2(10, 5); // parameterized constructor
    Rectangle r3(r2);    // copy constructor

    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Area of r2 is " << r2.area() << endl;
    cout << "Area of r3 is " << r3.area() << endl;

    return 0;
}