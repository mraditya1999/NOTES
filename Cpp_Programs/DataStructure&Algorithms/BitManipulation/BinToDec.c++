#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter a binary to convert to decimal: ";
    cin >> binary;

    int decimal = 0;
    int i = 0;

    cout << "decimal representation of " << binary << " is: ";
    while (binary != 0)
    {
        int digit = binary % 10;
        if (digit == 1)
            decimal += digit * (1 << i);
        binary /= 10;
        i++;
    }

    cout << decimal << endl;
    return 0;
}
