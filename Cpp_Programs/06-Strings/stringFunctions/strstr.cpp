// strstr() => find substring in a string,it give whole string after given substring
// strchr() => find occurence of string, same as strstr()
// strrchr() => find occurence of string from right side
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[20] = "Hello World";
    char str2[20] = "o";

    if (strstr(str1, str2) != NULL)
        cout << "substring of str1 is " << strstr(str1, str2) << endl;
    else
        cout << "substring not found" << endl;

    return 0;
}
