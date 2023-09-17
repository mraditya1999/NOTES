// A nested class is a class that is declared in another class.
// The nested class is also a member variable of the enclosing class and has the same access rights as the other members.
// However, the member functions of the enclosing class have no special access to the members of a nested class.
// Inner class can access the member of outer class if they are static members
// Outer class can create the object of inner class.
// Using that object outer class can access all the member of inner class.
// Object must be created after the definition of inner class.

#include <iostream>
using namespace std;

class Outer
{
public:
    void func()
    {
        cout << "Outer class" << endl;
        inner.display();
    }
    class Inner
    {
    public:
        void display()
        {
            cout << "Inner class" << endl;
        }
    };
    Inner inner;
};

int main()
{
    Outer outer;
    outer.func();

    // We can create object like this:
    // Outer::Inner inner;
    return 0;
}
