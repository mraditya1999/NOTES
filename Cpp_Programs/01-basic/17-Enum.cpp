// enum(user defined data type) are used  to define a set of named constants under a single name
// #define mon 1
// const mon = 1;
// instead of these we can define enum constants

#include <iostream>
using namespace std;

int main()
{
    enum days
    {
        mon = 1,
        tue,
        wed,
        thu,
        fri = 10,
        sat,
        sun
    };

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;
    return 0;
}
