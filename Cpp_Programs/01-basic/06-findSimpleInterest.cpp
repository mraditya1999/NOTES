#include <iostream>
#include <math.h>
using namespace std;

float findSimpleInterest(float, float, float);

int main()
{
    // find Simple Interest Rate
    float principle, rate, time, simpleInterest;

    cout << "Enter principle: ";
    cin >> principle;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter time: ";
    cin >> time;

    cout << "Simple Interest is: " << findSimpleInterest(principle, rate, time) << endl;

    return 0;
}

float findSimpleInterest(float principle, float rate, float time)
{
    return (principle * rate * time) / 100;
}