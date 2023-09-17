// In Inheritance, if we use Base class pointer pointing to derived class object method then resources acquired by base class only deallocate, but not by derived class.
// So for deallocating resources of derived class we need to use virtual destructor,as same as virtual constructor
// useful for runtime polymorphism,

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};

int main()
{

    Base *base = new Derived();
    delete base;

    return 0;
}
