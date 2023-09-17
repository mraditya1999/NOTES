// parameter passing methods
// 1. Call by value
// 2. Call by address
// 3. Call by reference

// Call by value
// In this method, the actual value of an argument is copied into the formal parameter of the function.
// In this case, changes made to the parameter inside the function have no effect on the argument.

#include <iostream>
using namespace std;

void swap(int num1, int num2) // formal parameters
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    int num1 = 10, num2 = 20;
    cout << "Before swapping: " << num1 << " " << num2 << endl;
    swap(num1, num2); // actual parameters
    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}
