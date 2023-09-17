// reference is an alias name for a variable and it must be initialize at the time of declaration and it cannot reassign again
// reference is an alias name for a variable, so it does not have its own memory location
//
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;

    cout << "Address of x: " << &x << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of y: " << &y << endl;
    cout << "Value of y: " << y << endl;

    x++;
    cout << "Address of x: " << &x << endl;
    cout << "Value of x: " << x << endl;

    y++;
    cout << "Address of y: " << &y << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}
