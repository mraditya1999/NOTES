// pop_back() will .delete a single character at the end of the string.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    cout << "Before string pop: " << str << endl;
    str.pop_back();
    cout << "After string pop: " << str << endl;

    return 0;
}
