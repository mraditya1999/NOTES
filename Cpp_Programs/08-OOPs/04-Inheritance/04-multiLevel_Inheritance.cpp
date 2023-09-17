// In multilevel inheritance, a class is allowed to inherit from another derived class.
// Syntax:
// class derived-class1: access-mode base-class { body of derived class };
// class derived-class2: access-mode derived-class1 { body of derived class};

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

class C : public B
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

    C c;
    c.funcA();
    c.funcB();
    c.funcC();

    return 0;
}
