// When derived class object is created, base class defualt constructor is executed first.
// If we want to execute parameterised constructor of base class, then we have to call it explicitly from derived class constructor.
// syntax : ClassName (parameter list) : BaseClassConstructor (parameter list) { body of derived class constructor }
// constructor called from derived class to Base class, but executed from Base class to Derived class

// If  a class is inherited from another class, then it is having isA relationship with base class.
// If a class is using object of another class, then it is having hasA relationship with base class.
// Constructors can be declared as private, but not as protected or public.

#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Non-Parameterised Base Constructor" << endl; }
    Base(int x) { cout << "Parameterised Base Constructor" << endl; }
};

class Derived : public Base
{
public:
    Derived() { cout << "Non-Parameterised Derived Constructor" << endl; }
    Derived(int x) { cout << "Parameterised Derived Constructor 1" << endl; }
    Derived(int x, int y) : Base(x) { cout << "Parameterised Derived Constructor 2" << endl; }
    // calling base class parameterised constructor explicitly
};

int main()
{
    Derived d1;
    cout << endl;

    Derived d2(5);
    cout << endl;

    Derived d3(5, 10);
    cout << endl;

    return 0;
}
