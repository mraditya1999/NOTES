// erase same as clear()
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    cout << "Before string erased: " << str << endl;
    str.erase();
    cout << "After string erased: " << str << endl;

    return 0;
}
