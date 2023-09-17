//  static variables are variables which remain in memory until the program terminates
// The main difference between global variables and static variables is that global variabl are accessible in every function but static variables are accessible only within the function in which they are declared.

#include <iostream>
using namespace std;

void func()
{
    static int num = 0;
    num++;
    cout << num << endl;
}

int main()
{
    func();
    func();
    func();
    return 0;
}
