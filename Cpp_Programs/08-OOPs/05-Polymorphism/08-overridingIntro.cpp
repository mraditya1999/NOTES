// Function Overriding -> When it redefines a function of the base class in a derived class with the same signature i.e., name, return type, and parameter but with a different definition.
// It is achieved by virtual functions and pointers
#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Parent::display()" << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Child::display()" << endl;
    }
};

int main()
{

    Parent p;
    p.display();

    Child c;
    c.display();

    // To access the overridden function of the base class, we use the scope resolution operator(::).
    c.Parent::display();

    return 0;
}
