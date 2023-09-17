// for accessing string class, we need to include string header file
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Entered string is: " << str << endl;

    cout << "Enter a string again!!: ";
    getline(cin, str);
    cout << "Entered string is: " << str << endl;

    return 0;
}
