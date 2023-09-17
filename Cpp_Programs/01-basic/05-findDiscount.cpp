#include <iostream>
using namespace std;

float findDiscount(float);

int main()
{
    float discount = 0.0, billAmount;

    cout << "Enter the bill amount: ";
    cin >> billAmount;

    discount = findDiscount(billAmount);

    cout << "Bill Amount: " << billAmount << endl;
    cout << "Discount is: " << discount << endl;
    cout << "Pay Amount is: " << billAmount - discount << endl;
    return 0;
}

float findDiscount(float billAmount)
{
    if (billAmount >= 500)
        return billAmount * 20 / 100;
    else if (billAmount >= 100 && billAmount < 500)
        return billAmount * 10 / 100;
    else
        return 0.0;
}