// Inline function
// An inline function is a function that is expanded in line when it is called.
//  When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call.
// This substitution is performed by the C++ compiler at compile time.
// An inline function may increase efficiency if it is small.
// If function is  inside a class it will automatically become an inline function
// If function is  outside a class it will automatically become an non-inline function
// To make a non-inline function an inline function we have to use inline keyword before the function definition
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int perimeter();

    // inline function because it is inside the class
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area();
};

// non-inline function because it is outside the class
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// make explicitily inline function,otherwise it will be non-inline function
inline int Rectangle::area()
{
    return length * breadth;
}

int main()
{
    Rectangle r1(10, 5);
    cout << "Area of r2 is " << r1.area() << endl;

    return 0;
}
