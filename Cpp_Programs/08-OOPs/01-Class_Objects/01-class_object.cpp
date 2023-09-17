// Class is a user-defined data type.
// class is a blueprint for creating objects.
// Class is a collection of data members and member functions.
// Class does not occupy any memory.
// Class is a logical entity.

// Object is an instance of a class.
// Object is a real world entity.
// Object occupies memory.
// Object  contains data members and member functions.

// By default, all the members of a class are private.
// total size of the object is sum of size of all data members.
// objects will be destroyed when they go out of scope.
// objects will be destroyed in reverse order of creation.

// 1.Each object gets its own copy of the data member.
// 2.All-access the same function definition as present in the code segment.
// Meaning each object gets its own copy of data members and all objects share a single copy of member functions.

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
    // object create in stack with this method and dot operator(.) use to access data members & member functions in this method
    Rectangle r1;

    r1.length = 10;
    r1.breadth = 5;

    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Perimeter of r1 is " << r1.perimeter() << endl;

    return 0;
}
