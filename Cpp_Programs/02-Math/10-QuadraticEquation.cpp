#include <iostream>
#include <math.h>
using namespace std;

void findQuadraticEquation(float, float, float);

int main()
{
    float a, b, c;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;

    findQuadraticEquation(a, b, c);

    return 0;
}

void findQuadraticEquation(float a, float b, float c)
{
    float discriminant, root1, root2, realPart, imaginaryPart;

    // Roots of quadratic equation (ax2 + bx + c = 0)
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "root1 = " << root1 << endl;
        cout << "root2 = " << root2 << endl;
    }

    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        root1 = -b / (2 * a);
        cout << "root1 = root2 = " << root1 << endl;
    }

    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "root1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "root2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}