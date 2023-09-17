// Lambda Expression are used to create anonymous functions(defining unnamed functions).
// syntax: [capture_list](parameter_list) -> return_type { function_body };

#include <iostream>
using namespace std;

template <class T>
void func(T func)
{
    func();
}

int main()
{
    // without parameter
    []()
    { cout << "Hello World" << endl; }(); // This is a lambda expression

    // with parameters
    [](int x, int y)
    { cout << x + y << endl; }(2, 3); // This is a lambda expression

    // with return type
    int x = [](int x, int y) -> int
    { return x + y; }(2, 3); // This is a lambda expression
    cout << x << endl;

    // assigning lambda expression to a variable
    auto f = [](int x, int y) -> int
    { return x + y; };
    cout << f(2, 3) << endl;

    int a = 5, b = 10;

    // we can capture variables from the outer scope by value or by reference.
    [a, b]()
    { cout << a << " " << b << endl; }(); // This is a lambda expression"}

    // we can capture variables from the outer scope by value or by reference.
    [&a, &b]()
    { cout << ++a << " " << ++b << endl; }(); // This is a lambda expression"}

    // we can capture all variables from the outer scope by using reference.
    [&]()
    { cout << a << " " << b << endl; }(); // This is a lambda expression"}

    // We can pass lambda expression as a parameter to a function
    int c = 10;
    auto f1 = [&c]()
    { cout << c++ << endl; };
    func(f1);

    return 0;
}
