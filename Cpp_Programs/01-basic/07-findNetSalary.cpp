// Calculate Net Salary
#include <iostream>
using namespace std;

float findNetSalary(float, float, float);

int main()
{
    float basicSalary, percentageOfAllowances, percentageOfDeductions, netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Percentage of Allowances: ";
    cin >> percentageOfAllowances;
    cout << "Enter Percentage of Deductions: ";
    cin >> percentageOfDeductions;

    cout << "Net Salary: " << findNetSalary(basicSalary, percentageOfAllowances, percentageOfDeductions) << endl;
    return 0;
}

float findNetSalary(float basicSalary, float PercentageOfAllowances, float PercentageOfDeductions)
{
    return basicSalary + (basicSalary * PercentageOfAllowances / 100) - (basicSalary * PercentageOfDeductions / 100);
}