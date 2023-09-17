// tilde(~) is used to call destructor.
// construcor is called when object is created.
// destructor is called when object is destroyed.
// Constructor is used for allocation of memory.
// Destructor is used for deallocation of memory.
// Constuctor can be overloaded.
// Destructor cannot be overloaded.
// When we create an object dynamically in heap,then only the constructor is called,for calling a destructor we should use delete operator.Otherwise destructor will not not called.
// In the classes where we are dynamically allocating the memory inside the class the we must release the memory inside the destructor.
// Otherwise object may be deleted, but the memory may not be deleted from heap.
// If we are not releasing the memory inside the destructor then it will lead to memory leak.
// Destructor is called  just before the  end of object life.
// Abstract class destructors must have an non-virtual destructor
// Destructor of a global object is called just before end of the program.

#include <iostream>
using namespace std;

class Demo
{
    int *ptr;

public:
    Demo()
    {
        ptr = new int(10);
        cout << "Constructor" << endl;
    }
    ~Demo()
    {
        delete[] ptr;
        cout << "Destructor" << endl;
    }
};

void fun()
{
    // Demo d;
    Demo *demo = new Demo();
    delete demo;
}

int main()
{
    fun();
    return 0;
}
