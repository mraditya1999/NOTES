#include <iostream>
using namespace std;

class RationalNumbers
{
private:
    int p;
    int q;

public:
    // constructors
    RationalNumbers();
    RationalNumbers(int p, int q);
    RationalNumbers(RationalNumbers &rational);

    // mutators
    void setP(int p);
    void setQ(int q);

    // accessors
    int getP();
    int getQ();

    // facilitators
    RationalNumbers operator+(RationalNumbers &rational);
    RationalNumbers operator-(RationalNumbers &rational);
    RationalNumbers operator*(RationalNumbers &rational);
    RationalNumbers operator/(RationalNumbers &rational);

    // comparators/Inspectors
    bool operator==(RationalNumbers &rational);
    bool operator!=(RationalNumbers &rational);
    bool operator>(RationalNumbers &rational);
    bool operator<(RationalNumbers &rational);
    bool operator>=(RationalNumbers &rational);
    bool operator<=(RationalNumbers &rational);

    // I/O operators
    friend istream &operator>>(istream &in, RationalNumbers &rational);
    friend ostream &operator<<(ostream &out, RationalNumbers &rational);
};

RationalNumbers::RationalNumbers()
{
    p = 1;
    q = 1;
}

RationalNumbers::RationalNumbers(int p, int q)
{
    setP(p);
    setQ(q);
}

RationalNumbers::RationalNumbers(RationalNumbers &rational)
{
    this->p = rational.p;
    this->q = rational.q;
}

void RationalNumbers::setP(int p) { this->p = p; }
void RationalNumbers::setQ(int q) { this->q = q; }

int RationalNumbers::getP() { return p; }
int RationalNumbers::getQ() { return q; }

RationalNumbers RationalNumbers::operator+(RationalNumbers &rational)
{
    RationalNumbers temp;
    temp.p = this->p * rational.q + this->q * rational.p;
    temp.q = this->q * rational.q;
    return temp;
}

RationalNumbers RationalNumbers::operator-(RationalNumbers &rational)
{
    RationalNumbers temp;
    temp.p = this->p * rational.q - this->q * rational.p;
    temp.q = this->q * rational.q;
    return temp;
}

RationalNumbers RationalNumbers::operator*(RationalNumbers &rational)
{
    RationalNumbers temp;
    temp.p = this->p * rational.p;
    temp.q = this->q * rational.q;
    return temp;
}

RationalNumbers RationalNumbers::operator/(RationalNumbers &rational)
{
    RationalNumbers temp;
    temp.p = this->p * rational.q;
    temp.q = this->q * rational.p;
    return temp;
}

bool RationalNumbers::operator==(RationalNumbers &rational)
{
    return (this->p * rational.q == this->q * rational.p);
}

bool RationalNumbers::operator!=(RationalNumbers &rational)
{
    return (this->p * rational.q != this->q * rational.p);
}

bool RationalNumbers::operator>(RationalNumbers &rational)
{
    return (this->p * rational.q > this->q * rational.p);
}

bool RationalNumbers::operator<(RationalNumbers &rational)
{
    return (this->p * rational.q < this->q * rational.p);
}

bool RationalNumbers::operator>=(RationalNumbers &rational)
{
    return (this->p * rational.q >= this->q * rational.p);
}

bool RationalNumbers::operator<=(RationalNumbers &rational)
{
    return (this->p * rational.q <= this->q * rational.p);
}

istream &operator>>(istream &in, RationalNumbers &rational)
{
    cout << "Enter p: ";
    in >> rational.p;
    cout << "Enter q: ";
    in >> rational.q;
    return in;
}

ostream &operator<<(ostream &out, RationalNumbers &rational)
{
    out << rational.p << "/" << rational.q << endl;
    return out;
}

int main()
{
    RationalNumbers r1(3, 4);
    RationalNumbers r2(2, 5);
    RationalNumbers r3;

    cout << "r1 = " << r1;
    cout << "r2 = " << r2;

    r3 = r1 + r2;
    cout << "r1 + r2 = " << r3;

    r3 = r1 - r2;
    cout << "r1 - r2 = " << r3;

    r3 = r1 * r2;
    cout << "r1 * r2 = " << r3;

    r3 = r1 / r2;
    cout << "r1 / r2 = " << r3;

    if (r1 == r2)
        cout << "r1 == r2" << endl;
    else
        cout << "r1 != r2" << endl;

    if (r1 != r2)
        cout << "r1 != r2" << endl;
    else
        cout << "r1 == r2" << endl;

    if (r1 > r2)
        cout << "r1 > r2" << endl;
    else
        cout << "r1 <= r2" << endl;

    if (r1 < r2)
        cout << "r1 < r2" << endl;
    else
        cout << "r1 >= r2" << endl;

    if (r1 >= r2)
        cout << "r1 >= r2" << endl;
    else
        cout << "r1 < r2" << endl;

    if (r1 <= r2)

        cout << "r1 <= r2" << endl;
    else
        cout << "r1 > r2" << endl;

    return 0;
}
