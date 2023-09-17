#include <iostream>
using namespace std;

template <class T1, class T2>

void add(T1 x, T2 y)
{
    cout << x + y << endl;
}

int main()
{
    add(3, 7.5);
    add(3.02, 7);
    add('g', 5.5);

    return 0;
}
