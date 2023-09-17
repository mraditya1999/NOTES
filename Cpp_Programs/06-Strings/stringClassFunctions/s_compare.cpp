// compare() method compare two strings
#include <iostream>
using namespace std;

int main()
{
    string str1 = "This is a test string1";
    string str2 = "This is a test string2";
    string str3 = "A This is a test string2";

    cout << "The string is: " << str1.compare(str1) << endl;
    cout << "The string is: " << str1.compare(str2) << endl;
    cout << "The string is: " << str1.compare(str3) << endl;

    return 0;
}
