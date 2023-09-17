// at() method give a CHRACTER at a given position in the string
#include <iostream>
using namespace std;

int main()
{
    string str = "This is a test string";

    cout << "character at position 5 is: " << str.at(5) << endl;
    cout << "character at position 5 is: " << str[5] << endl;
    return 0;
}
