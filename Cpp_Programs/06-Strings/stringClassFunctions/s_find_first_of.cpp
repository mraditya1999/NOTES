// find_first_of() method find occurences of a string or character in a string from beginning of the string
// It will look for individual characters in the string and return the first occurence of the character in the string

#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";
    cout << "first occurence of given string is at: " << str.find_first_of("is") << endl;
    cout << "first occurence of given string is at: " << str.find_first_of("is", 5) << endl;

    return 0;
}
