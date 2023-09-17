// constant pointer of integer type
// Here, we can't change the address but we can change the value of the variable that the pointer is pointing to.
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int *const p = &x;

    x++;
    ++(*p);

    // p = &y; // error: assignment of read-only variable 'p'

    cout << x << endl;
    cout << *p << endl;

    return 0;
}
