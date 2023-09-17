#include <stdio.h>
#include <stdlib.h>

typedef struct singly_ll
{
    int data;
    struct singly_ll *next;
} NODE;

NODE *start, *ptr, *new_node;
NODE *reverseLinkedListLink();
NODE *reverseLLUsingRecursion(NODE*);
void reverseLinkedListData();
void create_ll();
void show(NODE *);

void main()
{
    create_ll();
    printf("\nLINKED LIST BEFORE: ");
    show(start);
    // start = reverseLinkedListData();
    // start = reverseLinkedListLink();
    start = reverseLLUsingRecursion(start);

    printf("\nLINKED LIST AFTER: ");
    show(start);
}

void create_ll()
{
    int val;
    printf("\nEnter -1 to Exit");
    printf("\nEnter the data: ");
    scanf("%d", &val);

    while (val != -1)
    {
        ptr = start;

        new_node = (NODE *)malloc(sizeof(NODE));
        new_node->data = val;
        new_node->next = NULL;

        if (start == NULL)
            start = new_node;
        else
        {
            while (ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
        }
        printf("\nEnter -1 to Exit");
        printf("\nEnter the data: ");
        scanf("%d", &val);
    }
}

void show(NODE *start)
{
    ptr = start;
    if (start == NULL)
        printf("LINKED LIST IS EMPTY!!");
    else
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
}

void reverseLinkedListData()
{
    int temp;
    NODE *st, *end;
    ptr = start;

    while (ptr->next != NULL)
        ptr = ptr->next;
    st = start;
    end = ptr;
    while (st <= end)
    {
        temp = st->data;
        st->data = end->data;
        end->data = temp;
        st++;
        end--;
    }
}

NODE *reverseLinkedListLink()
{
    NODE *current = start;
    NODE *prev = NULL;
    NODE *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

NODE *reverseLLUsingRecursion(NODE *start)
{
    if(start->next == NULL || start == NULL)
        return start;
    
    else
    {// 1 2 3 4 5
        ptr = reverseLLUsingRecursion(start->next);
            start->next->next = start; 
            start->next = NULL;
    }
    return ptr;    
}