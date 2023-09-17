// Here, we can't change the address and we can't change the value of the variable that the pointer is pointing to.
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    const int *const p = &x;
    // p = &y; // error: assignment of read-only variable 'p'
    // ++(*p); // error: increment of read-only location '* p'

    return 0;
}
