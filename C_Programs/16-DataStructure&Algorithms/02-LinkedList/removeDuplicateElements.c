//Write a program that removes all nodes that have duplicate information.

#include <stdio.h>
#include <stdlib.h>

typedef struct singly_ll
{
    int data;
    struct singly_ll *next;

} NODE;

NODE *start = NULL;

NODE *addNode(NODE *);
NODE *removeDuplicateElements(NODE *);
void show(NODE *);

int main()
{

    NODE *temp;
    temp = removeDuplicateElements(start);
    show(temp);

    return 0;
}

NODE *addNode(NODE *start)
{
    NODE *new_node, *ptr;
    int value;
    printf("\n Enter -1 to end");
    printf("\n Enter the data: ");
    scanf("%d", &value);
    while (value != -1)
    {
        new_node = (NODE *)malloc(sizeof(NODE));
        new_node->data = value;
        if (start == NULL)
        {
            new_node->next = NULL;
            start = new_node;
        }

        else
        {
            ptr = start;
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\n Enter -1 to end");
        printf("\n Enter the data: ");
        scanf("%d", &value);
    }
    return start;
}


NODE *removeDuplicateElements(NODE *start)
{
    NODE *ptr, *ptr2, *preptr;
    start = addNode(start);

    ptr = start;
    while (ptr->next != NULL)
    {
        ptr2 = ptr->next;
        preptr = ptr;
        while (ptr2 != NULL)
        {
            if (ptr->data == ptr2->data)
            {
                preptr->next = ptr2->next;
                free(ptr2);
                ptr2 = preptr->next;
            }
            else
            {
                preptr = ptr2;
                ptr2 = ptr2->next;
            }
        }
        ptr = ptr->next;
    }

    return start;
}


void show(NODE *start)
{
    NODE *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}