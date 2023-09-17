#include <iostream>
using namespace std;

void displayDayUsingSwitch(int);
void displayMonthUsingSwitch(int);
void displayGradesUsingSwitch(int);

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;
    displayDayUsingSwitch(day);

    int month;
    cout << "Enter month number: ";
    cin >> month;
    displayMonthUsingSwitch(month);

    int marks1, marks2, marks3, marks4, marks5;
    float average;
    cout << "Enter marks of five subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;
    displayGradesUsingSwitch(average);

    return 0;
}

void displayDayUsingSwitch(int day)
{
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid day number" << endl;
        break;
    }
}

void displayMonthUsingSwitch(int month)
{
    switch (month)
    {
    case 1:
        cout << "January" << endl;
        break;

    case 2:
        cout << "February" << endl;
        break;

    case 3:
        cout << "March" << endl;
        break;

    case 4:
        cout << "April" << endl;
        break;

    case 5:
        cout << "May" << endl;
        break;

    case 6:
        cout << "June" << endl;
        break;

    case 7:
        cout << "July" << endl;
        break;

    case 8:
        cout << "August" << endl;
        break;

    case 9:
        cout << "September" << endl;
        break;

    case 10:
        cout << "October" << endl;
        break;

    case 11:

        cout << "November" << endl;
        break;

    case 12:
        cout << "December" << endl;
        break;

    default:
        cout << "Invalid month number" << endl;
        break;
    }
}

void displayGradesUsingSwitch(int average)
{
    switch (average / 10)
    {
    case 9:
        cout << "Grade: A" << endl;
        break;

    case 8:
        cout << "Grade: B" << endl;
        break;

    case 7:
        cout << "Grade: C" << endl;
        break;

    case 6:
        cout << "Grade: C" << endl;
        break;

    case 5:
        cout << "Grade: E" << endl;
        break;

    default:
        cout << "Grade: F" << endl;
        break;
    }
}