// String is a set of characters
// String can be declared in two ways 1) char array 2) string class
// '\0' is a special character which is used to terminate the string
// It is also called string terminator, null character, string delimeter
// We can use 0 instead of '\0' but it is not recommended
#include <iostream>
using namespace std;

int main()
{
    // Initialization and declaration of string
    char str1[15] = "Hello World";
    char str2[] = "Hello World";
    char str3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char str4[] = {65, 66, 67, 68, '\0'};
    string str5 = "Hello World";
    // char *str5 = "Hello World"; not supported by latest compilers

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;

    return 0;
}
