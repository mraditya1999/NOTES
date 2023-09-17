// constant keyword in functions
// If we declare a function as constant, then we cannot change the value of any data member of the class.
// We can write the const keyword after the function name or before the function name.
// After this,We can only read the value of the data member.

#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 20;
    void display() const
    {
        // x++; // error: 'Demo::x' in read-only object
        cout << x << " " << y;
    }
};

int main()
{
    Demo d;
    d.display();
    return 0;
}
