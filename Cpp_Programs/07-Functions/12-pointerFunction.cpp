// pointer to a function
// one function pointer can point on any function which is having the same signature
// In function overriding, internally function pointer is used for achieving the runtime polymorphism
#include <iostream>
using namespace std;

void display()
{
    cout << "Hello World" << endl;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a > b) ? b : a;
}

int main()
{
    void (*fp1)(); // declaration of a function pointer (function signature )
    fp1 = display; // assign the address of display function to fp
    (*fp1)();      // call the function using function pointer

    int (*fp2)(int, int);           // declaration of a function pointer
    fp2 = max;                      // assign the address of max function to fp
    cout << (*fp2)(10, 20) << endl; // call the function using function pointer

    // we can reassign the address of another function to the same function pointer
    fp2 = min; // assign the address of min function to fp
    cout << (*fp2)(10, 20) << endl;

    return 0;
}
