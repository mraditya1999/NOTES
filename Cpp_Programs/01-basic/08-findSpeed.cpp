#include <iostream>
#include <math.h>
using namespace std;

float findSpeed(int, int, int);

int main()
{
    int initialVelocity, finalVelocity, acceleration;
    float speed;

    cout << "Enter initial velocity: ";
    cin >> initialVelocity;

    cout << "Enter final velocity: ";
    cin >> finalVelocity;

    cout << "Enter acceleration: ";
    cin >> acceleration;

    cout << "Speed is: " << findSpeed(initialVelocity, finalVelocity, acceleration) << endl;

    return 0;
}

float findSpeed(int initialVelocity, int finalVelocity, int acceleration)
{
    return (pow(finalVelocity, 2) - pow(initialVelocity, 2)) / (2 * acceleration);
}