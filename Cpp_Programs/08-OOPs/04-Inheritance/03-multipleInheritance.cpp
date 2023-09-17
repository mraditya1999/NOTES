// In multiple inheritance, a class is allowed to inherit from more than one class.
// Syntax:
// class derived-class: access-mode base-class1, access-mode base-class2 {
// body of derived class
// };

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

class B
{
public:
    int b;
    void funcB()
    {
        cout << "funcB() called" << endl;
    }
};

class C : public A, public B
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
