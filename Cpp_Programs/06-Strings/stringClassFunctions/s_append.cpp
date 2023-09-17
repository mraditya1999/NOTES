#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    cout << "Before string appended: " << str << endl;
    str.append(" World");
    cout << "After string appended: " << str << endl;

    return 0;
}
