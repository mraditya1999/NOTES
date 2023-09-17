// Abstract class is a class that contains at least one pure virtual function.
// Abtract class cannot be instantiated.
// We cannot  create the object of the abstract class, but we can create the pointer of the abstract class.
// If the derived class will not redefine the pure virtual function of the base class, then the derived class will also become an abstract class.

// If base class having all concrete functions, then the purpose of the base class is to provide the reusability of the code.
// If base class having some concrete functions & some pure vitual functions, then the purpose of the base class is to provide the reusability & polymorphism.
// If base class having all pure vitual functions, then the purpose of the base class is to provide the polymorphism, such base class is known as an interface.

#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class Rectangle : public Shape
{

private:
    float length;
    float breadth;

public:
    Rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    float area() { return length * breadth; }
    float perimeter() { return 2 * (length + breadth); }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float radius) { setRadius(radius); }

    void setRadius(float radius) { this->radius = radius; }
    float getRadius() { return radius; }

    float area() { return M_PI * radius * radius; }
    float perimeter() { return 2 * M_PI * radius; }
};

int main()
{
    Shape *shape;

    shape = new Rectangle(2, 4);
    cout << "Area of Rectangle: " << shape->area() << endl;
    cout << "Perimeter of Rectangle: " << shape->perimeter() << endl;

    shape = new Circle(3.2);
    cout << "Area of Circle: " << shape->area() << endl;
    cout << "Perimeter of Circle: " << shape->perimeter() << endl;

    return 0;
}
