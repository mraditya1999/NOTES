// Delegation of constructor
// one constructor can call another constructor within a same class.
#include <iostream>
using namespace std;

class Test
{
private:
    int a = 10;
    int b = 20;

public:
    Test(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    // Non paramaterized constructor will call paramaterized constructor
    Test() : Test(1, 1) {}
};

int main()
{

    return 0;
}
