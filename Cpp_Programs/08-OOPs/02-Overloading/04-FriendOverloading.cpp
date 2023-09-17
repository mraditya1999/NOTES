// friend function doesn't belong to any class, so we don't need to use scope resolution operator(::)
// Friend function using operator overloading offers better flexibility to the class.
// These functions are not a members of the class and they do not have 'this' pointer.
// When you overload a unary operator you have to pass one argument.
// When you overload a binary operator you have to pass two arguments.
// Friend function can access private members of a class directly.
// A friend function in C++ has the privilege to access all the private and protected data of members of the class whose friend it has been declared.
//  It is not a member function of the class, but it can access the private and protected members of the class.
// It is declared using the keyword friend in the class definition.
#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // operator overloading using friend function for inside the class
    friend ComplexNumber operator+(ComplexNumber c1, ComplexNumber c2)
    {
        ComplexNumber temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }

    // operator overloading using friend function for outside the class
    // friend ComplexNumber operator+(ComplexNumber, ComplexNumber);

    void display()
    {
        cout << "c3 = " << real << " + " << imaginary << "i" << endl;
    }
};

// friend overloaded function definition outside the class
// ComplexNumber operator+(ComplexNumber c1, ComplexNumber c2)
// {
//     ComplexNumber temp;
//     temp.real = c1.real + c2.real;
//     temp.imaginary = c1.imaginary + c2.imaginary;
//     return temp;
// }

int main()
{
    ComplexNumber c1(7, 2);
    ComplexNumber c2(5, 3);

    ComplexNumber c3;
    c3 = c1 + c2; // OR c3 = operator+(c1, c2);

    c3.display();
    return 0;
}
