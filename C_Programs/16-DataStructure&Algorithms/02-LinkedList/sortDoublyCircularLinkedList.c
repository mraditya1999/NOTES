//8. Write a program to sort the values stored in a doubly circular linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct circulardoubly_ll
{
    struct circulardoubly_ll *prev;
    int data;
    struct circulardoubly_ll *next;
} NODE;

NODE *start = NULL;
void create_ll();
void display_ll();
void sort_list();

void main()
{
    create_ll();
    printf("\nLINKED LIST BEFORE: ");
    display_ll();
    sort_list();
    printf("\nLINKED LIST AFTER: ");
    display_ll();
}

void create_ll()
{
    NODE *new_node, *ptr;
    int value;

    printf("\nEnter -1 to end");
    printf("\nEnter the data: ");
    scanf("%d", &value);

    while (value != -1)
    {
        new_node = (NODE *)malloc(sizeof(NODE));
        new_node->data = value;

        if (start == NULL)
        {
            start = new_node;
            new_node->prev = NULL;
            new_node->next = start;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;

            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = start;
            start->prev = new_node;
        }

        printf("\nEnter -1 to end: ");
        printf("\nEnter the data: ");
        scanf("%d", &value);
    }
}

void sort_list()
{
    int temp;
    NODE *ptr1, *ptr2;

    ptr1 = start;

    while (ptr1->next != start)
    {
        ptr2 = ptr1->next;
        while (ptr2 != start)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

void display_ll()
{
    NODE *ptr;
    ptr = start;

    if (start != NULL)
    {
        while (ptr->next != start)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    else
        printf("LINKED LIST IS NULL...");
}
