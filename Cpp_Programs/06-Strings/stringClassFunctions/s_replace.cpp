// replace(from where, how much words, to be replaced string)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Hello";

    cout << "Before string replaced`: " << str << endl;
    str.replace(1, 4, "ey");
    cout << "After string replaced: " << str << endl;

    return 0;
}
