// const is a qualifier that can be used to declare a variable as constant.
// #define is a preprocessor directive that is used to define a constant.

#include <iostream>
using namespace std;
#define PI 3.14159

int main()
{
    const int x = 10;
    // x++; // error: increment of read-only variable 'x'
    cout << x << endl;

    return 0;
}
