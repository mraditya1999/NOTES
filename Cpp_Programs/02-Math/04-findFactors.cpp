#include <iostream>
using namespace std;

int findFactors(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    findFactors(n);
    return 0;
}

int findFactors(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    return 0;
}