// parameter passing methods
// 1. Call by value
// 2. Call by address
// 3. Call by reference

// Call by reference
// In this method, the address of the actual argument is passed to the formal parameter.
// Inside the function, the address is used to access the actual argument used in the call.
// This means that changes made to the parameter affect the argument.

#include <iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    int temp = num1;

    num1 = num2;
    num2 = temp;
}

int main()
{

    int num1 = 10, num2 = 20;
    cout << "Before swapping: " << num1 << " " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;
}
