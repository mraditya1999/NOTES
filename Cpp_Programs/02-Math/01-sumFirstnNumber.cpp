#include <iostream>
#include <math.h>
using namespace std;

int sumOfFirstNNumber(int);

int main()
{
    // Sum of first N Natural Numbers
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "Sum of first " << n << " Natural No. is: " << sumOfFirstNNumber(n) << endl;

    return 0;
}

int sumOfFirstNNumber(int n)
{
    return (n * (n + 1)) / 2;
}