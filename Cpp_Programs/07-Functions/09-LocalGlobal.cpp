// Local Variables and Global Variables

// Local variables are created when a function is called and destroyed when the function is exited.
// Global variables are created when the program is started and destroyed when the program is exited.

// Local variables are stored on the stack.
// global variables are stored in the data segment.

// Local variables are not accessible outside the function in which they are declared.
// Global variables are accessible throughout the program.

// Local variables are not initialized by default.
// Global variables are initialized by default to zero.

// Local variables are faster than global variables.

// Local variables are not shared between functions.
// Global variables are shared between functions.

// When local and global variables have same name and they are used in a function,tcompiler will look for nearest neighbors first.
// we can access global variable explicitly by using (::)scope resolution operator.

#include <iostream>
using namespace std;

int global = 5;
int secondGlobal = 55;

void fun()
{

    int local = 54;
    int secondGlobal = 6;

    cout << "second global(local) variable is: " << secondGlobal << endl;
    cout << "second global(global) variable is: " << ::secondGlobal << endl;

    cout << "local variable value: " << local << endl;
    cout << "global variable value: " << global << endl;
}

int main()
{
    fun();
    return 0;
}
