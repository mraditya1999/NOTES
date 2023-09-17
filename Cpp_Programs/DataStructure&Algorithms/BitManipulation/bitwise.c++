#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << " a & b is: " << (a & b) << endl;
    cout << " a | b is: " << (a | b) << endl;
    cout << " ~ a  is: " << (~a) << endl;
    cout << " a ^ b is: " << (a ^ b) << endl;
    cout << endl;

    // left shift -> multily by 2 for small numbers
    // right shift -> divide by 2 for small numbers
    cout << "a << 1 is: " << (a << 1) << endl;
    cout << "a >> 1 is: " << (a >> 1) << endl;
    cout << "a << 2 is: " << (a << 2) << endl;
    cout << "a >> 2 is: " << (a >> 2) << endl;
}