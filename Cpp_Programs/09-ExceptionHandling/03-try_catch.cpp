// try and catch between functions
// Instead of using try-catch block we can use if-else block to handle the exception.
// But the actual use of try catch block is to handle exceptions when we are using functions to perform operations that may throw an exception.
// the function will either return an exception or return a result,which should be handled.
// try catch block is more efficient and easy to use.
#include <iostream>
using namespace std;

int division(int, int);

int main()
{
    int x = 10, y = 0, z;

    try
    {
        int ans = division(x, y);
        cout << "ans = " << x << endl;
    }
    catch (int e)
    {
        cout << "Exception: Division by zero" << endl;
    }

    // this line of code will execute ,whether exception occurs or not
    cout << "End of program" << endl;
    return 0;
}

int division(int x, int y)
{
    if (y == 0)
        throw 1;
    return x / y;
}