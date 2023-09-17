// typedef(user defined data type) are used to define a new data type or give an alias to an existing data type
// It also increases the readability of the program
// int m1,m2,m3,r1,r2,r3
// instead of these we can define typedef

#include <iostream>
using namespace std;

int main()
{
    typedef int marks;
    typedef int rollno;
    marks m1, m2, m3;
    rollno r1, r2, r3;

    return 0;
}
