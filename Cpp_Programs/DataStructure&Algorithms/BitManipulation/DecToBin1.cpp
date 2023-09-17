// only for positive decimal values
#include <iostream>
using namespace std;

int main()
{
    int decimalNumber;
    cout << "Enter a number to convert to binary: ";
    cin >> decimalNumber;

    int binary = 0;
    int i = 1;

    cout << "Binary representation of " << decimalNumber << " is: ";
    while (decimalNumber != 0)
    {
        int rem = decimalNumber % 2;
        binary += rem * i;
        i *= 10;
        decimalNumber = decimalNumber >> 1;
    }
    cout << binary << endl;

    // cout << "Binary representation of " << decimal << " is :"<<bitset<32>(decimal)<<endl;
    return 0;
}
