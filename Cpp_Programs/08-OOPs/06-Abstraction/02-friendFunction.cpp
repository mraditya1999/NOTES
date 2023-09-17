// friend function can access protected and private members of a class upon the object.
// For accessing the data, the declaration of a friend function should be done inside the body of a class starting with the keyword friend.

// Characteristics of a Friend function:
// The function is not in the scope of the class to which it has been declared as a friend.
// It cannot be called using the object as it is not in the scope of that class..
// It cannot access the member names directly and has to use an object name and dot membership operator with the member name.
// It can be declared either in the private or the public part.

#include <iostream>
using namespace std;

class Shape
{
public:
    int length;

private:
    int breadth;

protected:
    int height;

    friend void Cuboid();

    void display()
    {
        cout << "Length: " << this->length << endl;
        cout << "Breadth: " << this->breadth << endl;
        cout << "Height: " << this->height << endl;
    }
};

// Friend function definitions
void Cuboid()
{
    Shape shape;

    shape.length = 10;
    shape.breadth = 20;
    shape.height = 30;

    shape.display();
}

int main()
{

    Cuboid();
    return 0;
}
