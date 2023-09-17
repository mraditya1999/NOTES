#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int);
bool isPalindrome(int);
bool isPerfectNumber(int);
bool isPowerOf2(int);
bool isPrime(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;

    if (isPalindrome(n))
        cout << n << " is a Palindrome number" << endl;
    else
        cout << n << " is not a Palindrome number" << endl;

    if (isPerfectNumber(n))
        cout << n << " is a Perfect number" << endl;
    else
        cout << n << " is not a Perfect number" << endl;

    if (isPowerOf2(n))
        cout << n << " is a Power of 2" << endl;
    else
        cout << n << " is not a Power of 2" << endl;

    if (isPrime(n))
        cout << n << " is a Prime number" << endl;
    else
        cout << n << " is not a Prime number" << endl;

    return 0;
}

bool isArmstrong(int n)
{
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }
    if (temp == sum)
        return true;
    else
        return false;
}

bool isPalindrome(int n)
{
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum * 10 + lastDigit;
        n = n / 10;
    }
    if (temp == sum)
        return true;
    else
        return false;
}

bool isPerfectNumber(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    cout << "Sum of factors of " << n << " is: " << sum << endl;
    if (n * 2 == sum)
        return true;
    else
        return false;
}

bool isPowerOf2(int n)
{
    int ans = 1;
    int flag = 0;

    // integer range is 32bits 4 byte
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            flag = 1;
            break;
        }
        if (ans < INT32_MAX / 2)
            ans = ans * 2;
    }
    if (flag == 1)
        return true;
    else
        return false;
}

bool isPrime(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
        return false;
    }
    return true;
}