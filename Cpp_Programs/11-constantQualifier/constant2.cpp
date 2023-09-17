//  pointer to a integer constant
// It cannot be used to modify the value of the variable to which it points.
// cannot store constant variables to a pointer
// can store constant variables to a constant pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    const int *ptr = &x; // OR int const *ptr = &x;
    // ++*ptr;              // error: increment of read-only location '* p'

    cout << x << endl;
    cout << *ptr << endl;

    return 0;
}
