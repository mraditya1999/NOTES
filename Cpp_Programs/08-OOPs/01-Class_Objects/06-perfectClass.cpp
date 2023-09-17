// If we are writing all these functions in a class,whether we need them or don't,then we are writing a perfect class.
// We need to write in below order to ensure that we are following the guidelines to define a function in a class:
// 1. non-parameterized constructor
// 2. parameterized constructor
// 3. copy constructor
// 4. setters functions(mutators)
// 5. getter functions(accessors)
// 6. facilitator function (area & perimeter)
// 7. Inspector function ( bool isSquare())
// 8. Desctructor function (bool isSquare())

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

    // mutators function
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            cout << "Length cannot be negative";
    }
    // mutators function
    void setBreadth(int b)
    {
        if (b > 0)
            breadth = b;
        else
            cout << "Breadth cannot be negative";
    }

    // accessors function
    int getLength()
    {
        return length;
    }

    // accessors function
    int getBreadth()
    {
        return breadth;
    }

    // facilitator function
    int area()
    {
        return length * breadth;
    }

    // facilitator function
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // inspector function
    bool isEqual()
    {
        return length == breadth;
    }

    // destructor function
    ~Rectangle()
    {
        cout << "Destructor called";
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
