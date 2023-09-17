// We are using call by reference method
// In which parameters are a reference to the actual parameters.
// One function cannot access the members of another function, unless it becomes an inline function.
// In call by reference method, function becomes an inline function.

// parameters can also be made as constant
#include <iostream>
using namespace std;

void func(const int &x, const int &y)
{
    // x++; // error: increment of read-only reference 'x'
    cout << x << " " << y << endl;
}

int main()
{
    int x = 10;
    int y = 20;

    func(x, y);
    return 0;
}
