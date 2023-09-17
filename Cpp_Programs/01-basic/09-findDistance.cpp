#include <iostream>
#include <math.h>
using namespace std;

float findDistance(float, float, float, float);

int main()
{
    // Calculate the distance between two points.
    float x1, x2, y1, y2, distance;

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter y2: ";
    cin >> y2;

    cout << "Distance between two points is: " << findDistance(x1, x2, y1, y2) << endl;

    return 0;
}

float findDistance(float x1, float x2, float y1, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}