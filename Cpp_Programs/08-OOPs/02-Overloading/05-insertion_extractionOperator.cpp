// In C++, stream insertion operator “<<” is used for output and extraction operator “>>” is used for input.
// 1) cout is an object of ostream class and cin is an object of istream class
// 2) These operators must be overloaded as a global function. And if we want to allow them to access private data members of the class, we must make them friend.
// These operators can be overloaded to perform I/O for user-defined types like an object.
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

    friend istream &operator>>(istream &in, ComplexNumber &c);
    friend ostream &operator<<(ostream &out, ComplexNumber &c);
};

istream &operator>>(istream &in, ComplexNumber &c)
{
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imaginary;
    return in;
}

ostream &operator<<(ostream &out, ComplexNumber &c)
{
    out << c.real;
    out << "+i" << c.imaginary << endl;
    return out;
}

int main()
{
    ComplexNumber c1;
    cin >> c1; // OR operator>>(cin, c1);
    cout << "The complex object is ";
    cout << c1; // OR operator<<(cout, c1);

    return 0;
}
