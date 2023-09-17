#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(string);
string changeInLowerCase(string);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindromeString(changeInLowerCase(str)))
        cout << str << " is a Palindrome string" << endl;
    else
        cout << str << " is not a palindrome string" << endl;

    return 0;
}

bool isPalindromeString(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start++] != str[end--])
            return false;
    }
    return true;
}

string changeInLowerCase(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    return str;
}