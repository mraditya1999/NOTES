// Inheritance is a mechanism in which one class acquires the properties (methods and fields) of another class.
// In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.
// derived class (child) - the class that inherits from another class.
// base class (parent) - the class being inherited from.
// Inheritance is used to achieve runtime polymorphism,code reusability,readability,robustness.

// TYPES OF INHERITANCE
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance
// 5. Hybrid Inheritance

#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout << "Base class" << endl;
        cout << "x = " << x << endl;
    }
};

class Derived : public Base
{
public:
    int y;
    void display()
    {
        cout << "Derived class" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Base b;
    b.x = 10;
    b.show();

    Derived d;
    d.x = 10;
    d.y = 20;
    d.show();
    d.display();

    return 0;
}
