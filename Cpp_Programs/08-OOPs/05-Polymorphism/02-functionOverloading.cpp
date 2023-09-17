#include <iostream>
using namespace std;

class SumOfNumbers
{
public:
    int num1;
    int num2;

    // sum of two numbers
    int add(int num1, int num2)
    {
        return num1 + num2;
    }

    // sum of three numbers
    int add(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};

int main()
{
    SumOfNumbers s1;

    cout << s1.add(10, 20) << endl;
    cout << s1.add(10, 20, 30) << endl;

    return 0;
}
