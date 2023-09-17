#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    cout << "Before string swapped: " << str1 << " " << str2 << endl;
    str1.swap(str2);
    cout << "After string swapped: " << str1 << " " << str2 << endl;

    return 0;
}
