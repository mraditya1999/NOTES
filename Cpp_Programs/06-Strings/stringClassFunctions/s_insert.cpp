// insert() method insert string at given index
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "How you";
    cout << "Before string inserted: " << str << endl;
    // str.insert(4, " are ");  //OR
    str.insert(3, " area", 4);
    cout << "After string inserted: " << str << endl;

    return 0;
}
