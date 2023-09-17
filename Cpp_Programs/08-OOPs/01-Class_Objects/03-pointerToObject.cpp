// create a pointer to an object

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
    // object create in stack with this method and arrow operator(->) use to access data members & member functions in this method
    Rectangle r1;
    Rectangle *p1 = &r1;

    // object create in heap with this method and arrow operator(->) use to access data members & member functions in this method
    Rectangle *p2 = new Rectangle();

    r1.length = 10;
    r1.breadth = 5;

    p1->length = 10;
    p1->breadth = 5;

    p2->length = 10;
    p2->breadth = 5;

    cout << "Area of r1 is: " << r1.area() << endl;
    cout << "Perimeter of r1 is: " << r1.perimeter() << endl;

    cout << "Area of p1 is: " << p1->area() << endl;
    cout << "Perimeter of p1 is: " << p1->perimeter() << endl;

    cout << "Area of r1 is: " << r1.area() << endl;
    cout << "Perimeter of r1 is: " << r1.perimeter() << endl;

    cout << "Area of p2 is: " << p2->area() << endl;
    cout << "Perimeter of p2 is: " << p2->perimeter() << endl;

    return 0;
}
