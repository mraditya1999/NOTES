#include <iostream>
using namespace std;
//  && || !  are called short circuit operators
// If first coondition is false, then second coondition is not evaluated

int main()
{
    int a = 10, b = 20, c = 30;

    if (a > b && (++c) <= b)
    {
    }
    cout << "c = " << c << endl;

    a = 10, b = 20, c = 30;

    if (a < b || (++c) <= b)
    {
    }
    cout << "c = " << c << endl;
    return 0;
}
