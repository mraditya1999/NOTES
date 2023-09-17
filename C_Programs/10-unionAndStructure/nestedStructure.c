// WAP to read and display the information of a student using a nested structure.

#include <stdio.h>

int main()
{
    struct DOB
    {
        int day;
        int month;
        int year;
    };
    struct Student
    {
        int roll_no;
        struct DOB date;
        char name[25];
        float fees;
    };

    struct Student stud1;
    printf("\n Enter the roll number : ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name : ");
    scanf("%s", stud1.name);
    printf("\n Enter the fees : ");
fflush(stdin);
    scanf("%f", &stud1.fees);
    printf("\n Enter the DOB : ");
    scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);
        printf("\n ********STUDENT'S DETAILS *******");
    printf("\n ROLL No. = %d", stud1.roll_no);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %.2f", stud1.fees);
    printf("\n DOB = %d - %d - %d", stud1.date.day, stud1.date.month, stud1.date.year);
    return 0;
}