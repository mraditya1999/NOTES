// Display digits of a number in reverse order
#include <iostream>
using namespace std;

void displayDigits(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The digits of " << n << " are: ";
    displayDigits(n);
    return 0;
}

void displayDigits(int n)
{
    if (n > 0)
    {
        cout << n % 10 << " ";
        displayDigits(n / 10);
    }
}