// A function that returns a reference to an variable in the function

#include <iostream>
using namespace std;
int &fun(int &);

int main()
{
    int size = 5;

    cout << "address: " << &(fun(size)) << endl;
    cout << "size = " << fun(size) << endl;

    fun(size) = 362;

    cout << "address = " << &size << endl;
    cout << "size = " << size << endl;
    return 0;
}

int &fun(int &x)
{
    return x;
}