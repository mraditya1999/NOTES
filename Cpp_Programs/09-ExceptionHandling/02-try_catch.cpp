// In C++ programming, exception handling is performed using try/catch statement. The C++ try block is used to place the code that may occur exception. The catch block is used to handle the exception.

#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 10, z;

    try
    {
        if (y == 0)
            throw 1;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Exception: Division by zero" << e << endl;
    }

    // this line of code will execute ,whether exception occurs or not
    cout << "End of program" << endl;
    return 0;
}
