// In hybrid inheritance, we use more than one type of inheritance in a single program.
// Syntax:
// class base-class { body of base class };
// class derived-class1: access-mode base-class { body of derived class };
// class derived-class2: access-mode base-class { body of derived class };
// class derived-class3: access-mode derived-class1, access-mode derived-class2 { body of derived class };

/*
As we can see from the below code that data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data member/ function of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error. To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as :
Syntax 1: class B : virtual public A  { };
Syntax 2: class C : public virtual A { };
virtual can be written before or after the public.

Need for Virtual Base Classes: Consider the above situation. Now, if we create an object of class D and try to access the data members of class A , we will get an error. This is because the compiler does not know which copy of class A to use. To solve this problem, we use virtual base classes.

*/

//  Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class. Virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances.

// When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base. This is the reason why virtual base classes are also called indirect base classes.

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

class B : virtual public A
{
public:
    int b;
    void funcB()
    {
        cout << "funcB() called" << endl;
    }
};

class C : public virtual A
{
public:
    int c;
    void funcC()
    {
        cout << "funcC() called" << endl;
    }
};

class D : public B, public C
{
public:
    int d;
    void funcD()
    {
        cout << "funcD() called" << endl;
    }
};

int main()
{

    D d;
    d.funcA();
    d.funcB();
    d.funcC();
    d.funcD();

    return 0;
}
