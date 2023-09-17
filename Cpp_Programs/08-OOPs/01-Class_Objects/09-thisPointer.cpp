// To understand ‘this’ pointer, it is important to know how objects look at functions and data members of a class.
// Each object gets its own copy of the data member.
// All object access the same function definition as present in the code segment.
// Meaning each object gets its own copy of data members and all objects share a single copy of member functions.

// The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.
// ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).
// 'this' pointer is a constant pointer that points to the current object.

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
};

int main()
{

    Rectangle r(10, 5);
    cout << "Length = " << r.length << endl;
    cout << "Breadth = " << r.breadth << endl;

    return 0;
}
