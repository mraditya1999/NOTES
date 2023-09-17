// In single inheritance, a class is allowed to inherit from only one class.
// Syntax:
// class derived-class: access-mode base-class { body of derived class };

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

int main()
{

    B b;
    b.funcA();
    b.funcB();

    return 0;
}
