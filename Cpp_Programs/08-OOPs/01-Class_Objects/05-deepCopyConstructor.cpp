// problem with copy constructor
// If there  is a pointer in the class, then the copy constructor will not create a new object, but will copy the address of the pointer to the new object.
//  This is called shallow copy.
// If the pointer is pointing to a dynamically allocated memory, then the new object will also point to the same memory.
// This is a problem, because if the original object is deleted, then the new object will point to a memory that is already deleted.This is called a dangling pointer.
// To avoid this problem, we need to create a deep copy constructor.
// In the deep copy constructor, we need to create a new memory and copy the contents of the original memory to the new memory.
// This is called deep copy.

#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    int *p;

    Test(int x)
    {
        x = a;
        p = new int[a];
    }

    Test(Test &t)
    {
        a = t.a;
        p = t.p;        // shallow copy of pointer
        p = new int[a]; // deep copy of pointer
    }
};

int main()
{
    Test t1(5);
    Test t2(t1);
    return 0;
}
