// count total no. of bits in numbers
#include <iostream>
using namespace std;

int totalSetBits(int a, int b)
{

    int cnt = 0;
    while (a | b)
    {
        if (a & 1)
            cnt++;
        if (b & 1)
            cnt++;

        a = a >> 1;
        b = b >> 1;
    }
    return cnt;
}

int main()
{

    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "Answer is: " << totalSetBits(a, b);
    return 0;
}
