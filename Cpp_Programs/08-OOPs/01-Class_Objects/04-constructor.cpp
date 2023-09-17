// Constructors are used to intialize a data members, otherwise it will store garbage value which is philosophically wrong.
// we use  constructor when we want to set data members value at the time of creation of an object.
// Types of constructor
// 1.Non-Parameterized Constructor(default constructor)
// 2.Parameterized  Constructor
// 3.Copy  Constructor

// default constructor is called by default when we have not provided any constructor.
// It is  provided by compiler and set values of data members to zero by default.
// A constructor is a function which have same name as a class name.
// Constructors can also be overloaded
// Constructor  can be called by default when we create an object of a class.
// Constructor cannot have a return type.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // non-parameterized constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // parameterized constructor
    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &rect)
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            cout << "Length cannot be negative";
    }

    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            cout << "Breadth cannot be negative";
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

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
    Rectangle r1;        // non-parameterized constructor
    Rectangle r2(10, 5); // parameterized constructor
    Rectangle r3(r2);    // copy constructor

    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Area of r2 is " << r2.area() << endl;
    cout << "Area of r3 is " << r3.area() << endl;

    return 0;
}
