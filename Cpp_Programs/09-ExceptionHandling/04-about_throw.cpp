// We can throw any type of exception like int,float,double,string.
// We can also throw an object of Exception class or user-defined class.
// If function is throwing an exception,we can declare that it is throwing an exception.

#include <iostream>
using namespace std;

// user defined exception class inherits from built-in exception class.
class MyException : public exception
{
};

// throw(MyException) is a declaration that function is throwing an exception of MyException class(optional)
// throw(type_of_exception)
int division(int x, int y) throw(MyException)
{
    if (y == 0)
        throw MyException();
    return x / y;
}

int main()
{
    int x = 10, y = 0, z;

    try
    {
        int ans = division(x, y);
        cout << "ans = " << x << endl;
    }
    catch (MyException e)
    {
        cout << "Exception: Division by zero" << endl;
    }

    // this line of code will execute ,whether exception occurs or not
    cout << "End of program" << endl;
    return 0;
}
