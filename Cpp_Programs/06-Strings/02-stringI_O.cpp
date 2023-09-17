// only n-1 characters are read and the last character is set to null character
#include <iostream>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];

    // cout << "Enter a string: ";
    // cin >> str1; // read only one word from the input
    // cout << "You entered: " << str1 << endl;

    // cin.get() read whole string, but if we take another string just  after that it will skip it.
    // get() will read enter key,so the string will be read by first string and 'enter' will read by the second string
    // cout << "Enter a string: ";
    // cin.get(str1, 20);
    // cin.ignore(); // ignore the enter key
    // cout << "Enter a string again!!: ";
    // cin.get(str2, 20);
    // cout << "You entered: " << str1 << endl;
    // cout << "You entered: " << str2 << endl;

    cout << "Enter a string: ";
    cin.getline(str1, 20); // read whole string from the input
    cout << "Enter a string again!!: ";
    cin.getline(str2, 20);
    cout << "You entered: " << str1 << endl;
    cout << "You entered: " << str2 << endl;

    return 0;
}
