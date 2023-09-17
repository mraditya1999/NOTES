// operator overloading
// 1. unary operator overloading
// 2. binary operator overloading
// 3. binary operator overloading using Friend Function

// Operator that cannot be overloaded are as follows:
// Scope operator(::), Sizeof, member selector(.), member pointer selector(*), ternary operator(?:)

// Operator overloading is a compile-time polymorphism.
// Operator is overloaded to provide the special meaning to the user-defined data type.
// Operator overloading is used to overload or redefines operators.
// operators can be overloaded as a member function as well as friend functions.
// C++ provides the ability to add the variables of the user-defined data type same as built-in data types.

// inside class syntax
// class className { public: returnType operator symbol (arguments) {}}; // symbol is the operator to be overloaded

// outside class syntax
// prototype of the overloaded operator function must be declared in a class.
// returnType className::operator symbol (arguments) {} // symbol is the operator to be overloaded

#include <iostream>
using namespace std;

class ComplexNumber
{
public:
    int real;
    int imaginary;

    ComplexNumber(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // operator overloaded function inside the class
    ComplexNumber operator+(ComplexNumber c2)
    {
        ComplexNumber temp;
        temp.real = this->real + c2.real;
        temp.imaginary = this->imaginary + c2.imaginary;
        return temp;
    }
    // operator overloaded function declaration
    // ComplexNumber operator+(ComplexNumber c2);
};

// operator overloaded function definition outside the class
// ComplexNumber ComplexNumber::operator+(ComplexNumber c2)
// {
//     ComplexNumber temp;
//     temp.real = this->real + c2.real;
//     temp.imaginary = this->imaginary + c2.imaginary;
//     return temp;
// }

int main()
{
    ComplexNumber c1(3, 7);
    ComplexNumber c2(5, 4);
    ComplexNumber c3;

    c3 = c1 + c2; // OR c3 = c1.operator+(c2);
    cout << "c3 = " << c3.real << " + " << c3.imaginary << "i" << endl;

    return 0;
}
