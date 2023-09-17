// We have to include string.h/cstring header file for using string functions
// We have to include math.h/cmath header file for using math functions

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";

    cout << "After concatenation " << strcat(str1, str2) << endl;
    cout << "After concatenation of n " << strncat(str1, str2, 3) << endl;

    return 0;
}
