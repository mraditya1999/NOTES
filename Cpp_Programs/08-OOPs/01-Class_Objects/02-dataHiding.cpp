// data hiding is related to Encapsulation
// After Encapsulation we can also achieve data hiding
// only the functions should be made as a public, data should be made as a private.
// So we cannot read or write data members directly and mishandling of data does not occur
// by default data members contain garbage value,so if we directly call member functions without initializing,it will give garbage result
// So there should public functions for setting and getting data members

// setter functions called Mutators
// getter functions called Accessors
// together these functions are called as property functions

#include <iostream>
using namespace std;

class Rectangle
{
    // by default all data members and member functions are private, so we don't need to write access modifier
    int length;
    int breadth;

public:
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
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);

    cout << "Length is: " << r.getLength() << endl;
    cout << "Breadth is: " << r.getBreadth() << endl;

    cout << "Area of r is: " << r.area() << endl;
    cout << "Perimeter of r is: " << r.perimeter() << endl;
    return 0;
}
