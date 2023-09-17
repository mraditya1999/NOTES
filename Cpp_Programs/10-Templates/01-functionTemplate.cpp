// We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray().

#include <iostream>
using namespace std;

template <class T>

T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    // cout << getMax<int>(3, 7) << endl;
    // cout << getMax<double>(3.0, 7.0) << endl;
    // cout << getMax<char>('g', 'e') << endl;

    // OR

    cout << getMax(3, 7) << endl;
    cout << getMax(3.0, 7.0) << endl;
    cout << getMax('g', 'e') << endl;

    return 0;
}
