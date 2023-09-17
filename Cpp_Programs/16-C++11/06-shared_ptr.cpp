// By using shared_ptr more than one pointer can point to this one object at a time and it’ll maintain a Reference Counter using the use_count() method.
// smart pointer will not cause memory leak

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
    // can point multiple objects at a time
    shared_ptr<Rectangle> p1(new Rectangle(10, 5));
    shared_ptr<Rectangle> p2;

    // p1 and p2 are pointing to the same object
    p2 = p1;

    cout << "ptr1 " << p1->area() << endl;
    cout << "ptr2 " << p2->area() << endl;

    // Reference count of the object will be 2
    cout << p1.use_count() << endl;
    cout << p2.use_count() << endl;

    return 0;
}
