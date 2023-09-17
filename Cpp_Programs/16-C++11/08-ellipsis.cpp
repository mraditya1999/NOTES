// Ellipsis are used to pass variable number of arguments to a function.

#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int n, ...)
{
    int sum = 0;
    va_list list;      // va_list is a type to hold information about variable arguments.
    va_start(list, n); // va_start is used to initialize the list to store all arguments after n.

    for (int i = 0; i < n; i++)
        sum += va_arg(list, int); // va_arg is used to access the next argument in the list.

    va_end(list); // va_end is used to clean up the list after use.
    return sum;
}

int main()
{

    // We can pass any number of arguments to the function sum.
    // first argument is the number of arguments.
    cout << sum(3, 1, 2, 3) << endl;
    cout << sum(5, 1, 2, 3, 4, 5) << endl;

    return 0;
}
