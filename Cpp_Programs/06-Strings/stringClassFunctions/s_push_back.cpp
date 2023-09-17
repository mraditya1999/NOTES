// push_back() will insert a single character at the end of the string.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hell";

    cout << "Before string pushed: " << str << endl;
    str.push_back('o');
    cout << "After string pushed: " << str << endl;

    return 0;
}
