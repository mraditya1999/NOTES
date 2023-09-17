/*
28.WAP to create a linked list which stores the details of employees in a department. Read and print the information stored in the list.
Use the linked list of Question 28 so that it displays the record of a given employee only.
Use the linked list of Question 28 and insert information about a new employee.
Use the linked list of Question 28 and delete information about an existing employee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct studentDetails
{
    char emp_name[25];
    int emp_id;
    char emp_dept[25];
    struct studentDetails *next;
} NODE;

NODE *start = NULL, *ptr, *new_node;

void insertEmpRecords();
void showAllEmpRecords();
void searchEmpRecords(int);
void deleteEmpRecord(int);

void main()
{
    int choice, id;
    do
    {
        printf("\n1.INSERT EMPLOYEE RECORD");
        printf("\n2.SHOW ALL EMPLOYEE RECORD");
        printf("\n3.SEARCH EMPLOYEE RECORD");
        printf("\n4.DELETE EMPLOYEE RECORD");
        printf("\n5.Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertEmpRecords();
            break;

        case 2:
            showAllEmpRecords();
            break;

        case 3:
            printf("\nEnter Employee id to search  his record: ");
            scanf("%d", &id);
            searchEmpRecords(id);
            break;

        case 4:
            printf("\nEnter Employee id to delete its Record: ");
            scanf("%d", &id);
            deleteEmpRecord(id);
        }

    } while (choice != 5);
}

void insertEmpRecords()
{
    char ch;
    do
    {
        ptr = start;
        new_node = (NODE *)malloc(sizeof(NODE));

        fflush(stdin);
        printf("\nEnter Employee Name: ");
        gets(new_node->emp_name);
        printf("Enter Employee id: ");
        scanf("%d", &new_node->emp_id);
        printf("Enter Employee department: ");
        fflush(stdin);
        gets(new_node->emp_dept);

        if (start == NULL)
        {
            start = new_node;
            new_node->next = NULL;
        }

        else
        {
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }

        printf("\nDo you want to continue: ");
        fflush(stdin);
        scanf("%c", &ch);

    } while (ch == 'y' || ch == 'Y');
}
void showAllEmpRecords()
{
    ptr = start;
    while (ptr != NULL)
    {
        printf("\nEmployee Name :%s ", ptr->emp_name);
        printf("\nEmployee Id   :%d ", ptr->emp_id);
        printf("\nEmployee Dept :%s ", ptr->emp_dept);
        printf("\n");
        ptr = ptr->next;
    }
}

void searchEmpRecords(int id)
{
    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->emp_id == id)
        {
            printf("\nEmployee Name :%s ", ptr->emp_name);
            printf("\nEmployee Id   :%d ", ptr->emp_id);
            printf("\nEmployee Dept :%s ", ptr->emp_dept);
            printf("\n");
            return;
        }
        else
            ptr = ptr->next;
    }
    printf("No result...\n");
}

void deleteEmpRecord(int id)
{
    NODE *preptr;
    ptr = start;
    preptr = ptr;

    while (ptr != NULL)
    {
        if (ptr->emp_id == id)
        {
            preptr->next = ptr->next;
            free(ptr);
            return;
        }
        else
        {
            preptr = ptr;
            ptr = ptr->next;
        }
    }
}