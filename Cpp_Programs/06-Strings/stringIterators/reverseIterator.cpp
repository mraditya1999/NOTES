#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";

    // declaration of an iterator to a string
    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it;
    }

    return 0;
}
