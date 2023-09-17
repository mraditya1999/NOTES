// In Inheritance first base class constructor executed then derived class constructor executed.
// But In case of destructor first derived class destructor executed then base class destructor executed.

#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }
    ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Derived d;
    return 0;
}
