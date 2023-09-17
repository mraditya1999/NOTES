// The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.

// Types of Polymorphism -
// 1) Compile-time Polymorphism -> The overloaded functions are invoked by matching the type and number of arguments. This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time. It is achieved by function overloading and operator overloading which is also known as static binding or early binding.

// 2) Runtime Polymorphism -> Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time. It is achieved by method overriding which is also known as dynamic binding or late binding.

#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() { cout << "Car started" << endl; }
    virtual void stop() { cout << "Car stopped" << endl; }
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