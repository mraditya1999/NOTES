// In hierarchical inheritance, more than one derived classes are created from a single base class.
// Syntax:
// class base-class { body of base class };
// class derived-class1: access-mode base-class { body of derived class };
// class derived-class2: access-mode base-class  {  body of derived class  };

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void funcA()
    {
        cout << "funcA() called" << endl;
    }
};

class B : public A
{
public:
    int b;
    void funcB()
    {
        cout << "funcB() called" << endl;
    }
};

class C : public A
{
public:
    int c;
    void funcC()
    {
        cout << "funcC() called" << endl;
    }
};

int main()
{

    B b;
    b.funcA();
    b.funcB();

    C c;
    c.funcA();
    c.funcC();

    return 0;
}
