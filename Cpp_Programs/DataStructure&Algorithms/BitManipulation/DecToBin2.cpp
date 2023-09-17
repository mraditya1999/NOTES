// For positive and negative decimal values

#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal < 0)
    {
        decimal = ~decimal + 1;
        for (int i = 31; i >= 0; i--)
            cout << ((decimal >> i) & 1);
    }
    else
    {
        for (int i = 31; i >= 0; i--)
            cout << ((decimal >> i) & 1);
    }
    return 0;
}
