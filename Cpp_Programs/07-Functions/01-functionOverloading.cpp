// We can write  more than 1 function with same name but different arguments list (parameters) is known as function overloading.
// parameters list can be different in number or type or both.
// return type of function does not matter in function overloading.

#include <iostream>
#include <typeinfo>
using namespace std;

int add(int, int);
int add(int, int, int);
float add(float, float);

int main()
{
    int num1, num2, num3;
    float num4, num5;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of two numbers = " << add(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of three numbers = " << add(num1, num2, num3) << endl;

    cout << "Enter two float numbers: ";
    cin >> num4 >> num5;
    cout << "Sum of two float numbers = " << add(num4, num5) << endl;

    // cout << typeid(num4).name() << endl;
    // cout << typeid(num5).name() << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a + b;
}