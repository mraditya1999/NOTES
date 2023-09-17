// Access specifiers define how the members (attributes and methods) of a class can be accessed.

// In C++, there are three access specifiers:
// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

// members will be available but not accessible.
// In base class, we can access all members of base class.
// In derived class, we can access  only public & protected members of base class.
// On object, we cannot access private & protected members of class.

#include <iostream>
using namespace std;

class Base
{
public:
    int publicX;

private:
    int privateY;

protected:
    int protectedZ;

public:
    // In base class, we can access all members of base class.
    void functiionOfBaseClass()
    {
        publicX = 10;
        privateY = 20;
        protectedZ = 30;
    }
};

class Derived : public Base
{
public:
    void functionOfDerivedClass()
    {
        // In derived class, we can access public & protected members of base class.
        publicX = 10;
        protectedZ = 30;
    }
};

int main()
{

    // On object we can access only public members of base class.
    Base b;
    b.publicX = 10;

    return 0;
}