// Static data members
// Static data members are class members that are declared using static keywords.
// Only one copy of static member is created for the entire class and is shared by all the objects of that class.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program
// Syntax: static data_type data_member_name;

// static members are only declared in a class, not defined. They must be explicitly defined outside the class using the scope resolution operator.

// Uses:
// static members are used as a counter.
// static members can be used as a shared memory for instance,like one object can write something, the other object can read something from it.
// static members can provide information about a class.

// Static member functions
// Static member functions are class member functions that are declared using static keyword.
// By declaring a function as static, you make it independent of any particular object of the class.
// A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator ::.
// A static member function can only access static data member, other static member functions and any other functions from outside the class.
// Static member functions have a class scope and they do not have access to the this pointer of the class.

#include <iostream>
using namespace std;

class Student
{
public:
    int roll_no;
    string name;
    static int admission_no;
    static int fees;
    static int getFees() { return fees; }

    Student(string name)
    {
        this->name = name;
        admission_no++;
        roll_no = admission_no;
    }

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
    }
};

// If we want to it to be accessible  only inside  the Test class  we use resolution operator
int Student::admission_no = 0;
int Student::fees = 10000;

int main()
{
    Student student1("Rahul");
    Student student2("Rohit");
    Student student3("Ravi");

    student1.display();
    student2.display();
    student3.display();

    // static data members can be accessed using object also ,or they can be also accessed using class name.
    cout << student1.getFees() << endl;
    cout << student2.getFees() << endl;
    cout << student3.getFees() << endl;

    cout << "Number of Admissions: " << Student::admission_no << endl;
    cout << "Fees of Student: " << Student::getFees() << endl;

    return 0;
}
