#include <iostream>
using namespace std;

int findFactorial(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << findFactorial(n) << endl;
    return 0;
}

int findFactorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}