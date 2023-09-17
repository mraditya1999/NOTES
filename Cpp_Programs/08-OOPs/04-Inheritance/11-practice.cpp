#include <iostream>
using namespace std;

class Employee
{

public:
    int employeeId;
    string employeeName;

    Employee(int employeeId, string employeeName)
    {
        this->employeeId = employeeId;
        this->employeeName = employeeName;
    }

    int getEmployeeId() { return employeeId; }
    string getEmployeeName() { return employeeName; }
};

class FulltimeEmployee : public Employee
{
public:
    int employeeSalary;
    FulltimeEmployee(int employeeId, string employeeName, float employeeSalary) : Employee(employeeId, employeeName)
    {
        this->employeeSalary = employeeSalary;
    }

    int getSalary() { return employeeSalary; }
};

class ParttimeEmployee : public Employee
{
public:
    int employeeWage;
    ParttimeEmployee(int employeeId, string employeeName, float employeeWage) : Employee(employeeId, employeeName)
    {
        this->employeeWage = employeeWage;
    }

    int getWage() { return employeeWage; }
};

int main()
{

    FulltimeEmployee f1(1, "John", 1000);
    ParttimeEmployee p1(2, "Mary", 10);

    cout << "Fulltime Employee: " << f1.getEmployeeId() << " " << f1.getEmployeeName() << " " << f1.getSalary() << endl;
    cout << "Parttime Employee: " << p1.getEmployeeId() << " " << p1.getEmployeeName() << " " << p1.getWage() << endl;

    return 0;
}
