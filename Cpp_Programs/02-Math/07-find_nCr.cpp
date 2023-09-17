// nCr = n!/(r! * (n-r)!)

#include <iostream>
using namespace std;

int nCr(int, int);
int factorial(int);

int main()
{
    int n, r;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    cout << "Answer is: " << nCr(n, r);
    return 0;
}

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return num / denominator;
}