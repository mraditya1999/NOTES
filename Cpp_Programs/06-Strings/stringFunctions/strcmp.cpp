// strcmp, compare two strings, returns (-)ve, 0, (+)ve
// str1 == str2, returns (0)
// str1 < str2, returns (-ve)
// str1 > str2, returns (+ve)
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // char str1[20] = "Hello";
    // char str2[20] = "Hello";
    // cout << "Comparision of two strings are:" << strcmp(str1, str2);

    // char str1[20] = "hello";
    // char str2[20] = "Hello";
    // cout << "Comparision of two strings are:" << strcmp(str1, str2);

    char str1[20] = "HellO";
    char str2[20] = "Hello";
    cout << "Comparision of two strings are:" << strcmp(str1, str2);

    return 0;
}
