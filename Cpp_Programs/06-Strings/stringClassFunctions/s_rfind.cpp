// rfind() method find occurences of a string or character in a string from the end of the string

#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";
    cout << "Index of found string from right is: " << str.rfind("is") << endl;

    return 0;
}
