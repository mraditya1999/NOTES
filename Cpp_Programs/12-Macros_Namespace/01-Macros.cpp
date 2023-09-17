// Preprocessor directives also known as macros
// Preprocessor directives are command to compiler
// #define preprocessor will replace before the compilation starts.
// Preprocessor directives: #define, #undef, #ifdef, #ifndef, #if, #else, #elif, #endif

#include <iostream>
using namespace std;
#define PI 3.14                   // symbolic constants
#define SQARE(x) (x * x)          // functions
#define MAX(x, y) (x > y ? x : y) // functions
#define MSG(x) #x                 // #x will convert x to string
#ifndef define PI 3.14            // if PI is not defined then define it
#endif

int main()
{
    cout << "Value of PI is: " << PI << endl;
    cout << "Square of 5 is: " << SQARE(5) << endl;
    cout << "Message is: " << MSG(Hello World) << endl;

    return 0;
}
