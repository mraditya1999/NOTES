// We can create Base class pointer pointing on Derived class object
// only base class members are accessible through base class pointer
// We cannot create Derived class pointer & Base class object

#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "Base::fun1()" << endl;
    }
    void fun2()
    {
        cout << "Base::fun2()" << endl;
    }
    void fun3()
    {
        cout << "Base::fun3()" << endl;
    }
};

class Derived : public Base
{
public:
    void fun4()
    {
        cout << "derived::fun4()" << endl;
    }

    void fun5()
    {
        cout << "derived::fun5()" << endl;
    }
};

int main()
{
    // Derived d;
    // Base *ptr = &d;
    // OR
    Base *ptr = new Derived();

    ptr->fun1();
    ptr->fun2();
    ptr->fun3();

    return 0;
}
