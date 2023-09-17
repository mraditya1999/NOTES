// pointer to constant integer
// we can make a constant pointer point on other variable but we can't change the value of that variable.
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    const int *ptr = &x;

    ptr = &y;
    // ++(*ptr);      // error: increment of read-only location '* p'

    return 0;
}
