// find_last_of() method find occurences of a string or character in a string from the end of the string
// It will look for individual characters in the string and return the last occurence of the character in the string

#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";
    cout << "last occurence of given string is at: " << str.find_last_of("is") << endl;
    cout << "last occurence of given string is at: " << str.find_last_of("is", 2) << endl;

    return 0;
}
