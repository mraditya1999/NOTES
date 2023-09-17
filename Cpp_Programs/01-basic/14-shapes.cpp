#include <iostream>
#include <math.h>
using namespace std;

int areaOfSquare(int side);
int perimeterOfSquare(int side);
int areaOfRectangle(int length, int width);
int perimeterOfRectangle(int length, int width);
float areaOfCircle(float radius);
float circumferenceOfCircle(float radius);
int areaOfTriangle(int base, int height);
int volumeOfCylinder(int radius, int height);

int main()
{
    int side, length, width, base, height;
    float radius;

    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "The area of the square is: " << areaOfSquare(side) << endl;
    cout << "The perimeter of the square is: " << perimeterOfSquare(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "The area of the rectangle is: " << areaOfRectangle(length, width) << endl;
    cout << "The perimeter of the rectangle is: " << perimeterOfRectangle(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "The area of the circle is: " << areaOfCircle(radius) << endl;
    cout << "The circumference of the circle is: " << circumferenceOfCircle(radius) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "The area of the triangle is: " << areaOfTriangle(base, height) << endl;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "The volume of the cylinder is: " << volumeOfCylinder(radius, height) << endl;

    return 0;
}

int areaOfSquare(int side) { return side * side; }
int perimeterOfSquare(int side) { return 4 * side; }
int areaOfRectangle(int length, int width) { return length * width; }
int perimeterOfRectangle(int length, int width) { return 2 * (length + width); }
int areaOfTriangle(int base, int height) { return (base * height) / 2; }
float areaOfCircle(float radius) { return M_PI * radius * radius; }
float circumferenceOfCircle(float radius) { return 2 * M_PI * radius; }
int volumeOfCylinder(int radius, int height) { return M_PI * pow(radius, 2) * height; }