// unique_ptr stores one pointer only. We can assign a different object by removing the current object from the pointer.

#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
};

int main()
{

    // can point only one object at a time
    unique_ptr<Rectangle> p1(new Rectangle(10, 5));
    cout << p1->area() << endl;

    // Now p1 is empty and can't point to any object
    unique_ptr<Rectangle> p2;
    p2 = move(p1);
    cout << p2->area() << endl;
    // cout << p1->area() << endl; // Error: p1 is empty

        return 0;
}