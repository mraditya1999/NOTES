#include <iostream>
#include <math.h>
using namespace std;

int findGreater(int, int, int);

int main()
{
    int a, b, c;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    cout << "Greater number is: " << findGreater(a, b, c) << endl;
    return 0;
}

int findGreater(int a, int b, int c)
{
    if (a > b && a > c)
        return a;

    else if (b > c)
        return b;

    else
        return c;
}