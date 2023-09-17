#include <iostream>
#include <math.h>

using namespace std;

int findGCD(int, int);

int main()
{
    int a, b;
    cout << "Enter two number to find its gcd: ";
    cin >> a >> b;

    cout << findGCD(a, b);
    return 0;
}

int findGCD(int a, int b)
{
    // METHOD 1
    // cout << "GCD of " << a << " and " << b << " is: ";
    // while (a != b)
    // {
    //     if (a > b)
    //         a = a - b;
    //     else
    //         b = b - a;
    // }
    // cout << a << endl;

    // METHOD 2
    // for (int i = min(a, b); i >= 1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         return i;
    //     }
    // }
    // return 1;

    // METHOD 3 (Euclidean theorem)
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}