// We can increase the capacity using resize method
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    cout << "capacity of string is: " << str.capacity() << endl;
    str.resize(30);
    cout << "capacity of string is: " << str.capacity() << endl;
    return 0;
}
