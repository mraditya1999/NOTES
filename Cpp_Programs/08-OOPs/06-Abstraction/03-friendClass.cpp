// A friend class can access both private and protected members of the class in which it has been declared as friend.
// When a class is declared a friend class, all the member functions of the friend class become friend functions.
// We need to declare the friend class above the class in which it is declared as friend.

#include <iostream>
using namespace std;

class Shape
{
private:
    int breadth;

protected:
    int height;

public:
    int length;
    friend class Cuboid; // Friend class declaration
};

// Friend class definition
class Cuboid
{
public:
    Shape shape;

    void func()
    {
        shape.length = 10;
        shape.breadth = 20;
        shape.height = 30;
    }
};

int main()
{
    Cuboid c;
    c.func();
    return 0;
}
