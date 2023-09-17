// We have to include string.h/cstring header file for using string functions
// We have to include math.h/cmath header file for using math functions

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20] = "";

    cout << "After copy " << strcpy(str3, str1) << endl;
    cout << "After copy of n " << strncpy(str3, str1, 4) << endl;
    return 0;
}
