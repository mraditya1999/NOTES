#include <iostream>
using namespace std;

class Parent
{
public:
    int publicX;

private:
    int privateY;

protected:
    int protectedZ;

    void functionOfParentClass()
    {
        publicX = 10;
        privateY = 20;
        protectedZ = 30;
    }
};

class Child1 : public Parent
{
public:
    void functionOfChild1Class()
    {
        // In derived class, we can access only public & protected members of base class.
        publicX = 10;
        protectedZ = 30;
    }
};

class GrandChild1 : public Child1
{
public:
    void functionOfGrandchildClass()
    {
        publicX = 10;
        protectedZ = 30;
    }
};

class Child2 : protected Parent
{
public:
    void functionOfChild2Class()
    {
        publicX = 20;
        protectedZ = 30;
    }
};

class GrandChild2 : public Child2
{
public:
    void functionOfGrandchildClass()
    {
        publicX = 10;
        protectedZ = 30;
    }
};

class Child3 : private Parent
{
public:
    void functionOfChild3Class()
    {
        // In derived class, we can access only public & protected members of base class.
        publicX = 20;
        protectedZ = 30;
    }
};

class GrandChild3 : public Child3
{
public:
    void functionOfGrandchildClass()
    {
        // In grandChild class, we cannot access any members of child3 class because it is inheriting as private.
        // publicX = 10;    // error
        // privateY = 20;   // error
        // protectedZ = 30; // error
    }
};

int main()
{

    Child1 c1;
    c1.publicX = 10;
    // c1.privateY = 20; // error
    // c1.protectedZ = 30; // error

    GrandChild1 gc1;
    gc1.publicX = 10; // error
    // gc1.privateY = 20; // error
    // gc1.protectedZ = 30; // error

    Child2 c2;
    // c2.publicX = 10; // error
    // c2.privateY = 20; // error
    // c2.protectedZ = 30; // error

    GrandChild2 gc2;
    // gc2.publicX = 10; // error
    // gc2.privateY = 20; // error
    // gc2.protectedZ = 30; // error

    Child3 c3;
    // c3.publicX = 10;
    // c3.privateY = 20;   // error
    // c3.protectedZ = 30; // error

    GrandChild3 gc3;
    // gc3.publicX = 10;    // error
    // gc3.privateY = 20;   // error
    // gc3.protectedZ = 30; // error

    return 0;
}
