#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int maths;
    int physics;
    int chemistry;

public:
    Student(int roll_no, string name, int maths, int physics, int chemistry)
    {
        this->roll_no = roll_no;
        this->name = name;
        this->maths = maths;
        this->physics = physics;
        this->chemistry = chemistry;
    }

    void display()
    {
        cout << "Roll: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << maths << " " << physics << " " << chemistry << endl;
    }

    int getTotalMarks()
    {
        return maths + physics + chemistry;
    }

    char getGrade()
    {
        float average = getTotalMarks() / 3.0;
        if (average >= 90)
            return 'A';
        else if (average >= 80)
            return 'B';
        else if (average >= 70)
            return 'C';
        else if (average >= 60)
            return 'D';
        else if (average >= 40)
            return 'E';
        else
            return 'F';
    }
};

int main()
{
    int roll_no;
    string name;
    int maths;
    int physics;
    int chemistry;

    cout << "Enter Roll No: ";
    cin >> roll_no;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Marks in 3 subjects: ";
    cin >> maths >> physics >> chemistry;

    Student s1(roll_no, name, maths, physics, chemistry);

    s1.display();
    cout << "Total Marks: " << s1.getTotalMarks() << endl;
    cout << "Grade: " << s1.getGrade() << endl;

    return 0;
}
