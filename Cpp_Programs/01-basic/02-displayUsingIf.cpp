#include <iostream>
using namespace std;

void displayDayUsingIf(int);
void displayMonthUsingIf(int);
void displayGradesUsingIf(int);

int main()
{
    int day;
    cout << "Enter day number: ";
    cin >> day;
    displayDayUsingIf(day);

    int month;
    cout << "Enter month number: ";
    cin >> month;
    displayMonthUsingIf(month);

    int marks1, marks2, marks3, marks4, marks5;
    float average;
    cout << "Enter marks of five subjects: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;
    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;
    displayGradesUsingIf(average);

    return 0;
}

void displayDayUsingIf(int day)
{
    if (day == 1)
        cout << "Monday" << endl;
    else if (day == 2)
        cout << "Tuesday" << endl;
    else if (day == 3)
        cout << "Wednesday" << endl;
    else if (day == 4)
        cout << "Thursday" << endl;
    else if (day == 5)
        cout << "Friday" << endl;
    else if (day == 6)
        cout << "Saturday" << endl;
    else if (day == 7)
        cout << "Sunday" << endl;
    else
        cout << "Invalid day number" << endl;
}

void displayMonthUsingIf(int month)
{
    if (month == 1)
        cout << "January" << endl;
    else if (month == 2)
        cout << "February" << endl;
    else if (month == 3)
        cout << "March" << endl;
    else if (month == 4)
        cout << "April" << endl;
    else if (month == 5)
        cout << "May" << endl;
    else if (month == 6)
        cout << "June" << endl;
    else if (month == 7)
        cout << "July" << endl;
    else if (month == 8)
        cout << "August" << endl;
    else if (month == 9)
        cout << "September" << endl;
    else if (month == 10)
        cout << "October" << endl;
    else if (month == 11)
        cout << "November" << endl;
    else if (month == 12)
        cout << "December" << endl;
    else
        cout << "Invalid month number" << endl;
}

void displayGradesUsingIf(int average)
{
    if (average >= 90)
        cout << "Grade: A" << endl;
    else if (average >= 80)
        cout << "Grade: B" << endl;
    else if (average >= 70)
        cout << "Grade: C" << endl;
    else if (average >= 60)
        cout << "Grade: D" << endl;
    else if (average >= 50)
        cout << "Grade: E" << endl;
    else
        cout << "Grade: F" << endl;
}