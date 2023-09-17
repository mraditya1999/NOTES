// final specifier is used to restrict the inheritance and overriding of functions.
//  C++ 11 allows built-in facility to prevent overriding of virtual function using final specifier.
// final specifier in C++ 11 can also be used to prevent inheritance of class / struct. If a class or struct is marked as final then it becomes non inheritable and it cannot be used as base class/struct.
// final specifier is used after the class name & after the function name.
// Only virtual function can be marked as final.

// We cannot inherit from a final class
// class Parent1 final{};
// class Child1 : public Parent{};   // We cannot inherit from a final class

class Parent2
{
public:
    virtual void fun() final
    {
        cout << "Parent fun" << endl;
    }
};

class Child2 : public Parent2
{
public:
    // We cannot override a final function
    // void fun()
    // {
    //     cout << "Child fun" << endl;
    // }
};

#include <iostream>
using namespace std;

int main()
{
    /* code */
    return 0;
}
