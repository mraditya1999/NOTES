// In default arguments, if we didn't pass third value it will automatically take default given value
// It use to reduce the number of function overloading by using default arguments
// If we want to fill default value in parameters then we have to fill it from right to left without skipping any parameter
// otherwise it will give error
#include <iostream>
using namespace std;

int findMaximum(int num1, int num2 = 0, int num3 = 0)
{
    // return (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

int main()
{

    int num1 = 51, num2 = 54, num3 = 59;

    cout << "The maximum  number is: " << findMaximum(num1) << endl;
    cout << "The maximum  number is: " << findMaximum(num1, num2) << endl;
    cout << "The maximum  number is: " << findMaximum(num1, num2, num3) << endl;

    return 0;
}
