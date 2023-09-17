// function templates are used to create generic functions that can work with different data types
// if data type of parameters are different then it will give error,so both parameters should be of same data type
// template <typename T> // template declaration
#include <iostream>
using namespace std;

template <class T>
T findMaximum(T num1, T num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{

    int num1, num2;
    float num3, num4;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The larger number is " << findMaximum(num1, num2) << endl;

    cout << "Enter two float numbers: ";
    cin >> num3 >> num4;
    cout << "The larger number is " << findMaximum(num3, num4) << endl;

    // When we pass float value, then we have to pass the data type explicitly ,otherwise it will automatically take double value
    cout << "The larger number is " << findMaximum(12.5f, 13.5f) << endl;

    // both will give error, in second one it will take double value beacuse `we have not passed the data type explicitly
    // cout << "The larger number is " << findMaximum(12.5f, 13) << endl;
    // cout << "The larger number is " << findMaximum(12.5f, 13.4) << endl;
    return 0;
}
