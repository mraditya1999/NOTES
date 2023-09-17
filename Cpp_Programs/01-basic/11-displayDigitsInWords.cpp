#include <iostream>
using namespace std;

void displayDigitsInWords(int);
int reverseNumber(int);

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    num = reverseNumber(num);
    while (num > 0)
    {
        int rem = num % 10;
        displayDigitsInWords(rem);
        num /= 10;
    }

    return 0;
}

int reverseNumber(int num)
{
    int rev = 0;

    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

void displayDigitsInWords(int num)
{
    if (num == 1)
        cout << "One ";

    else if (num == 2)
        cout << "Two ";

    else if (num == 3)
        cout << "Three ";

    else if (num == 4)
        cout << "Four ";

    else if (num == 5)
        cout << "Five ";

    else if (num == 6)
        cout << "Six ";

    else if (num == 7)
        cout << "Seven ";

    else if (num == 8)
        cout << "Eight ";

    else if (num == 9)
        cout << "Nine ";

    else
        cout << "Invalid number";
}
