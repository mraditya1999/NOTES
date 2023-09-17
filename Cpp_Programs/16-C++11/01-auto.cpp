//  auto keyword
// By using auto keyword,we need not to specify the type of variable.
//  The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its initializer. In the case of functions, if their return type is auto then that will be evaluated by return type expression at runtime. Good use of auto is to avoid long initializations when creating iterators for containers.

// decltype Keyword
// It inspects the declared type of an entity or the type of an expression. ‘auto’ lets you declare a variable with a particular type whereas decltype lets you extract the type from the variable so decltype is sort of an operator that evaluates the type of passed expression.

// Typeid is an operator which is used where the dynamic type of an object needs to be known.

#include <iostream>
#include <typeinfo>
using namespace std;

float fun()
{
    return 2.3f;
}

int main()
{
    // auto is used in variable declaration, it will return the type of the variable
    auto x = 2 * 5.7 + 'a';
    cout << x << endl;
    cout << typeid(x).name() << endl;

    // auto is used in function, it will return the type of the return type of the function
    auto y = fun();

    // decltype is used to get the type of the variable
    int a = 5;
    decltype(x) ans = x + 5; // ans will be of type as same as x
    cout << typeid(a).name();
    return 0;
}
