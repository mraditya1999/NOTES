#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";

    // declaration of an iterator to a string
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }

    return 0;
}
