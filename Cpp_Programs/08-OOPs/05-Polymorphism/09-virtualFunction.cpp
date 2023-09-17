// ambiguity arises when we use base class pointer to refer to the derived class object
// If we don't use the virtual keyword, then function call would be on the base of the pointer.
// If we use the virtual keyword, then function call would be on the base of the object.
//  When we call the object of a derived class using the pointer or reference to the base class, we call the derived class virtual function for that object.

// There is a necessity to use the single pointer to refer to all the objects of the different classes. So, we create the pointer to the base class that refers to all the derived objects. But, when base class pointer contains the address of the derived class object, always executes the base class function. This issue can only be resolved by using the 'virtual' function.
// When the function is made virtual, C++ determines which function is to be invoked at the runtime based on the type of the object pointed by the base class pointer.
// Virtual function is a member function that is declared within the base class and can be redefined by the derived class.
// It is declared using the virtual keyword.
// It is used to tell the compiler to perform dynamic linkage or late binding on the function.
// In late binding function call is resolved during runtime. Therefore compiler determines the type of object at runtime, and then binds the function call.

// Rules of Virtual Function

// Virtual functions must be members of some class.
// Virtual functions cannot be static members.
// They are accessed through object pointers.
// They can be a friend of another class.
// A virtual function must be defined in the base class, even though it is not used.
// We cannot have a virtual constructor, but we can have a virtual destructor

#include <iostream>
using namespace std;

class Car
{
public:
    // pure virtual function, two ways to define it
    virtual void start() = 0;
    virtual void stop() {}
};

class Innova : public Car
{
public:
    void start() { cout << "Innova started" << endl; }
    void stop() { cout << "Innova stopped" << endl; }
};

class Swift : public Car
{
public:
    void start() { cout << "Swift started" << endl; }
    void stop() { cout << "Swift stopped" << endl; }
};

int main()
{
    Car *ptr;

    ptr = new Innova();
    ptr->start();
    ptr->stop();

    ptr = new Swift();
    ptr->start();
    ptr->stop();

    return 0;
}

// A pure virtual function is a virtual function that has no definition within the class.
// There are two ways of creating a virtual function:
// virtual void display() = 0;  OR virtual void display() {}
// The main purpose of the pure virtual function is to make the base class abstract.
// so that the derived class must override the pure virtual function.

// Programmers need to redefine the pure virtual function in the derived class as it has no definition in the base class.
// The class that is containing any pure virtual function, we cannot create the object of that class. This type of class is known as an abstract class.

/*
A virtual function is a member function in a base class that can be redefined in a derived class.
A pure virtual function is a member function in a base class whose declaration is provided in a base class and implemented in a derived class.

The classes which are containing virtual functions are not abstract classes.
The classes which are containing pure virtual function are the abstract classes.

In case of a virtual function, definition of a function is provided in the base class.
In case of a pure virtual function, definition of a function is not provided in the base class.

The base class that contains a virtual function can be instantiated.
The base class that contains a pure virtual function becomes an abstract class, and that cannot be instantiated.

If the derived class will not redefine the virtual function of the base class, then there will be no effect on the compilation.
If the derived class does not define the pure virtual function; it will not throw any error but the derived class becomes an abstract class.

All the derived classes may or may not redefine the virtual function.
All the derived classes must define the pure virtual function.
*/
