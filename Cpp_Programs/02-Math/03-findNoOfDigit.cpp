#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int findNoOfDigit(int);

int main()
{
    int n;
    cout << "Enter a number to find its digit: ";
    cin >> n;

    cout << "Number of digit in " << n << " is " << findNoOfDigit(n) << endl;
    cout << "Number of digit in " << n << " is " << (int)log10(n) + 1 << endl;

    return 0;
}

int findNoOfDigit(int n)
{
    int count = 0;
    while (n)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}