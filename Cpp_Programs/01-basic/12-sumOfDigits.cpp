#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits of the number is: " << sumOfDigits(num) << endl;
    return 0;
}
