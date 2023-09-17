#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    // Access
    cout << "String at given index: " << str1[1] << endl;

    // concatination
    cout << "str1 + str2 = " << str1 + " " + str2 << endl;

    // assignment
    str1 = "Hello " + str2;
    cout << "str1 = " << str1 << endl;
    return 0;
}
