// Namespaces are used to remove name conflicts between resources like functions,classes & objects.
// If two functions are defined with the same name in two different libraries, then there will be a conflict.
// We create namespace and put all the functions in that namespace.
// We  include that namespace in a header file & include that header file in the program.

#include <iostream>
using namespace std;

namespace First
{
    void func()
    {
        std::cout << "First namespace" << std::endl;
    }
}

namespace Second
{
    void func()
    {
        std::cout << "Second namespace" << std::endl;
    }
}

using namespace First;
int main()
{
    func();
    First::func();
    Second::func();

    return 0;
}
