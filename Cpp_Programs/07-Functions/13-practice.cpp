// Find m power n
#include <iostream>
using namespace std;

int findPower(int, int);

int main()
{
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << "Result = " << findPower(base, exponent) << endl;

    return 0;
}

int findPower(int base, int exponent)
{
    int ans = 1;
    for (int i = 0; i < exponent; ++i)
        ans *= base;
    return ans;
}