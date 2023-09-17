/*
 1. Members of a class are private by default.
 1. Members of a structure are public by default.
 2. An instance of a class is called an ‘object’.
 2. An instance of structure is called the ‘structure variable’.
 3. It is declared using the class keyword.
 3. It is declared using the struct keyword.
 4. It is normally used for data abstraction and further inheritance.
 4. It is normally used for the grouping of data.
 5. Syntax: class class_name {
           data_member;
           member_function;
    };
 5. Syntax: struct structure_name {
           type structure_member1;
           type structure_member2;
     };

 In C, structure can have only data members.
 In C++, structure can have data members and member functions.
*/

#include <iostream>
using namespace std;

struct Demo1
{
    int x;
    int y;

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

class Demo2
{
    int x;
    int y;

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Demo1 d1;
    d1.x = 10;
    d1.y = 20;

    cout << "x = " << d1.x << endl;
    cout << "y = " << d1.y << endl;

    Demo2 d2;
    // d2.x = 10; // error: ‘int Demo2::x’ is private

    return 0;
}