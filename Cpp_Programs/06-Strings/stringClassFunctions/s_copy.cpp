// copy() method copy a string into char array
#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello World";
    char str2[20] = "";

    str1.copy(str2, str1.length(), 6);

    cout << "Original string: " << str1 << endl;
    cout << "Copied string: " << str2 << endl;

    return 0;
}
