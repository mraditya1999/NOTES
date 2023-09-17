/*
WAP to initialize the members of a structure by using a pointer to the structure.
#include <stdio.h>
#include <conio.h>
struct student
{
int r_no;
char name[20];
char course[20];
int fees;
};
int main()
{
struct student stud1, *ptr_stud1;
clrscr();
ptr_stud1 = &stud1;
printf("\n Enter the details of the student :");
printf("\n Enter the Roll Number =");
scanf("%d", &ptr_stud1 -> r_no);
printf("\n Enter the Name = );
gets(ptr_stud1 -> name);
printf("\n Enter the Course = ");
gets(ptr_stud1 -> course);
printf("\n Enter the Fees = ");
scanf("%d", &ptr_stud1 -> fees);
printf("\n DETAILS OF THE STUDENT");
printf("\n ROLL NUMBER = %d", ptr_stud1 –> r_no);
printf("\n NAME = %s", ptr_stud1 –> name);
printf("\n COURSE = %s", ptr_stud1 –> course);
printf("\n FEES = %d", ptr_stud1 –> fees);
return 0;
}
Output
Enter the details of the student:
Enter the Roll Number = 02
Enter the Name = Aditya
Enter the Course = MCA
Enter the Fees = 60000
DETAILS OF THE STUDENT
ROLL NUMBER = 02
NAME = Aditya
COURSE = MCA
FEES = 60000
7. WAP, using an array of pointers to a structure, to read and display the data of
students.
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct student
{
int r_no;
char name[20];
char course[20];
int fees;
};
struct student *ptr_stud[10];
int main()
154 Data Structures Using C
{
int i, n;
printf("\n Enter the number of students : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
ptr_stud[i] = (struct student *)malloc(sizeof(struct student));
printf("\n Enter the data for student %d ", i+1);
printf("\n ROLL NO.: ");
scanf("%d", &ptr_stud[i]–>r_no);
printf("\n NAME: ");
gets(ptr_stud[i]–>name);
printf("\n COURSE: ");
gets(ptr_stud[i]–>course);
printf("\n FEES: ");
scanf("%d", &ptr_stud[i]–>fees);
}
printf("\n DETAILS OF STUDENTS");
for(i=0;i<n;i++)
{
printf("\n ROLL NO. = %d", ptr_stud[i]–>r_no);
printf("\n NAME = %s", ptr_stud[i]–>name);
printf("\n COURSE = %s", ptr_stud[i]–>course);
printf("\n FEES = %d", ptr_stud[i]–>fees);
}
return 0;
}
Output
Enter the number of students : 1
Enter the data for student 1
ROLL NO.: 01
NAME: Rahul
COURSE: BCA
FEES: 45000
DETAILS OF STUDENTS
ROLL NO. = 01
NAME = Rahul
COURSE = BCA
FEES = 45000
8. WAP that passes a pointer to a structure to a function.
#include <stdio.h>
#include <conio.h>
#include <alloc.h>
struct student
{
int r_no;
char name[20];
char course[20];
int fees;
};
void display (struct student *);
int main()
{
struct student *ptr;
ptr = (struct student *)malloc(sizeof(struct student));
printf("\n Enter the data for the student ");
printf("\n ROLL NO.: ");
scanf("%d", &ptr–>r_no);
Structures and Unions 155
printf("\n NAME: ");
gets(ptr–>name);
printf("\n COURSE: ");
gets(ptr–>course);
printf("\n FEES: ");
scanf("%d", &ptr–>fees);
display(ptr);
getch();
return 0;
}
void display(struct student *ptr)
{
printf("\n DETAILS OF STUDENT");
printf("\n ROLL NO. = %d", ptr–>r_no);
printf("\n NAME = %s", ptr–>name);
printf("\n COURSE = %s ", ptr–>course);
printf("\n FEES = %d", ptr–>fees);
}
Output
Enter the data for the student
ROLL NO.: 01
NAME: Rahul
COURSE: BCA
FEES: 45000
DETAILS OF STUDENT
ROLL NO. = 01
NAME = Rahul
COURSE = BCA
FEES = 45000

1. Declare a structure that represents the following hierarchical information.
(a) Student
(b) Roll Number
(c) Name
(i) First name
(ii) Middle Name
(iii) Last Name
(d) Sex
(e) Date of Birth
(i) Day
(ii) Month
(iii) Year
(f) Marks
(i) English
(ii) Mathematics
(iii) Computer Science
2. Define a structure to store the name, an array marks[] which stores the marks of three different subjects, and a character grade. WAP
to display the details of the student whose name is entered by the user. Use the structure definition of the first question to make an array of students.Display the name of the students who have securedless than 40% of the aggregate.
3. Modify Question 2 to print each student’s average marks and the class average (that includes average of all the student’s marks).
4. Make an array of students as illustrated in Question 1 and WAP to display the details of the student with the given Date of Birth.
5. WAP to find smallest of three numbers using structures.
6. WAP to calculate the distance between the given points (6,3) and (2,2).
7. WAP to read and display the information about all the employees in a department.Edit the details of the ith employee and display theinformation.
8. WAP to add and subtract height 6'2" and 5'4".
9. WAP to add and subtract 10hrs 20mins 50sec and 5hrs 30min 40sec.
10. WAP using structure to check if the current year is leap year or not.
11. WAP using pointer to structure to initialize the members of an employee structure. Use functions to print the employee’sinformation.
12. WAP to create a structure with the information given below. Then, read and print the data.
Employee[10]
(a) Emp_Id
(b) Name
(i) First Name
(ii) Middle Name
(iii) Last Name
(c) Address
(i) Area
(ii) City
(iii) State
(d) Age
(e) Salary
(f) Designation
13. Define a structure date containing three integers— day, month, and year. WAP using functions to read data, to validate the date entered by the user and then print the date on the screen. For example, if you enter 29,2,2010 then that is an invalid date as 2010 is not a leap year. Similarly 31,6,2007 is invalid as June does not have 31 days.
14. Using the structure definition of the above program, write a function to increment the date. Make sure that the incremented date is a valid
date.
15. Modify the above program to add a specific number of days to the given date.
16. WAP to define a structure vector. Then write functions to read data, print data, add two vectors and scale the members of a vector by a factor of 10.
17. WAP to define a structure for a hotel that has members— name, address, grade, number of rooms, and room charges. Write a function to print the names of hotels in a particular grade. Also write a function to print names of hotels that have room charges less than the specified value.
18. WAP to define a union and a structure both having exactly the same members. Using the sizeof operator, print the size of structure
variable as well as union variable and comment on the result.
19. Declare a structure time that has three fields—hr, min, sec. Create two variables start_time and end_time. Input their values from the user. Then while start_time does not reach the end_time, display GOOD DAY on the screen.
20. Declare a structure fraction that has two fields— numerator and denominator. Create two variables and compare them using function. Return 0 if the two fractions are equal, –1 if the first fraction is less than the second and 1 otherwise. You may convert a fraction into a floating point number for your convenience.
21. Declare a structure POINT. Input the coordinates of a point variable and determine the quadrant in
which it lies. The following table can be used to determine the quadrant Quadrant X Y
1 Positive Positive
2 Negative Positive
3 Negative Negative
4 Positive Negative
22. WAP to calculate the area of one of the geometric figures—circle, rectangle or a triangle. Write a function to calculate the area.
The function must receive one parameter which is a structure that contains the type of figure and the size of the components needed to calculate the area must be a part of a union. Note that a circle requires just one component, rectangle requires two components and a triangle requires the size of three components to calculate the area.
*/