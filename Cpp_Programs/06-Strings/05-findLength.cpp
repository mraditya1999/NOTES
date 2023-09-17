#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";
    int count1 = 0;
    int count2 = 0;
    string::iterator it;

    // Method 1: Using loop
    for (int i = 0; str[i] != '\0'; i++)
        count1++;
    cout << "length of the string is: " << count1 << endl;

    // Method 2: Using iterator
    for (it = str.begin(); it != str.end(); it++)
        count2++;
    cout << "length of the string is: " << count2 << endl;

    return 0;
}
