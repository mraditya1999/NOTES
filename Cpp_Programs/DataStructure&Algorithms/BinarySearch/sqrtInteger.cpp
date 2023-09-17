// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

#include <iostream>
using namespace std;

int sqrtInteger(int n)
{

    int start = 0;
    int end = n;
    long long int ans = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < n; j = j + factor)
            ans = j;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout << "Answer is: " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}