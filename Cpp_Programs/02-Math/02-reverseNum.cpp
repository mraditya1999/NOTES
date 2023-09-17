#include <iostream>
#include <math.h>
using namespace std;

int reverseNum(int);

int main()
{
    int n;
    cout << "Enter a number to reverse: ";
    cin >> n;

    cout << "Reverse of " << n << " is: " << reverseNum(n) << endl;
    return 0;
}

int reverseNum(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 10;
        ans = (ans * 10) + rem;
        n = n / 10;
    }
    return ans;
}