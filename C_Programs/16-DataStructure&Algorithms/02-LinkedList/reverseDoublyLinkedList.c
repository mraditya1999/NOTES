#include <stdio.h>
#include <stdlib.h>

typedef struct doubly_ll
{
    struct doubly_ll *prev;
    int data;
    struct doubly_ll *next;
} NODE;

NODE *start = NULL, *ptr, *new_node;
void create_ll(void);
void display_ll(NODE *);
NODE *reverseLinkedListLink();

void main()
{
    create_ll();
    printf("\nLINKED LIST BEFORE: ");
    display_ll(start);
    start = reverseLinkedListLink(start);
    printf("\nLINKED LIST AFTER: ");
    display_ll(start);
}

void create_ll()
{
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
            new_node->next = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;

            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = NULL;
        }

        printf("\nEnter -1 to end: ");
        printf("\nEnter the data: ");
        scanf("%d", &value);
    }
}

void display_ll(NODE *start)
{
    ptr = start;

    if (start != NULL)
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    else
        printf("LINKED LIST IS NULL...");
}

NODE *reverseLinkedListLink()
{
    NODE *current, *prev, *temp;

    current = start;
    prev = NULL;

    while (current != NULL)
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}