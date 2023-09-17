#include <stdio.h>
#include <stdlib.h>

typedef struct circular_ll
{
    int data;
    struct circular_ll *next;
} NODE;

NODE *start = NULL;
NODE *create_ll(NODE *);
NODE *display_ll(NODE *);
NODE *insert_beg(NODE *);
NODE *insert_end(NODE *);
NODE *insert_before(NODE *);
NODE *insert_after(NODE *);
NODE *delete_beg(NODE *);
NODE *delete_end(NODE *);
NODE *delete_node(NODE *);
NODE *delete_after(NODE *);
NODE *delete_list(NODE *);
NODE *sort_list(NODE *);

void main()
{
    int choice;
    do
    {
        printf("\n\n * ****MAIN MENU * ***");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Add a node before a given node");
        printf("\n 6: Add a node after a given node");
        printf("\n 7: Delete a node from the beginning");
        printf("\n 8: Delete a node from the end");
        printf("\n 9: Delete a given node");
        printf("\n 10: Delete a node after a given node");
        printf("\n 11: Delete the entire list");
        printf("\n 12: Sort the list");
        printf("\n 13: EXIT");
        printf("\n\n Enter your option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            start = create_ll(start);
            printf("\n LINKED LIST CREATED");
            break;

        case 2:
            start = display_ll(start);
            break;

        case 3:
            start = insert_beg(start);
            printf("NEW NODE INSERTED AT BEGINNNING...\n");
            break;

        case 4:
            start = insert_end(start);
            printf("NEW NODE INSERTED AT End...\n");
            break;

        case 5:
            start = insert_before(start);
            printf("NEW NODE INSERTED BEFORE SPECIFIED VALUE...\n");
            break;

        case 6:
            start = insert_after(start);
            printf("NEW NODE INSERTED AFTER SPECIFIED VALUE...\n");
            break;

        case 7:
            start = delete_beg(start);
            printf("NODE DELETED FROM THE BEGINNING....");
            break;

        case 8:
            start = delete_end(start);
            printf("NODE DELETED FROM THE END.....");
            break;

        case 9:
            start = delete_node(start);
            printf("NODE DELETED....");
            break;

        case 10:
            start = delete_after(start);
            printf("NODE DELETED after a given node...");
            break;

        case 11:
            start = delete_list(start);
            printf("LINKED LIST DELETED...\n");
            break;

        case 12:
            start = sort_list(start);
            break;
        }
    } while (choice != 13);
}

NODE *create_ll(NODE *start)
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
            new_node->next = new_node;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = start;
        }
        printf("\n Enter -1 to end");
        printf("\n Enter the data: ");
        scanf("%d", &value);
    }
    return start;
}

NODE *display_ll(NODE *start)
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
        printf("%d", ptr->data);
    }
    else
        printf("LINKED LIST IS NULL...\n");
    return start;
}

NODE *insert_beg(NODE *start)
{
    NODE *new_node, *ptr;
    int value;

    printf("Enter a value to be inserted at Beginning: ");
    scanf("%d", &value);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = value;
    ptr = start;

    while (ptr->next != start)
        ptr = ptr->next;

    ptr->next = new_node;
    new_node->next = start;
    start = new_node;

    return start;
}

NODE *insert_end(NODE *start)
{
    NODE *ptr, *new_node;
    int value;

    printf("Enter a value to be inserted at the End: ");
    scanf("%d", &value);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = value;
    ptr = start;

    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = start;
    start = new_node;

    return start;
}

NODE *insert_before(NODE *start)
{
    NODE *new_node, *ptr, *preptr;
    int val1, val2;

    new_node = (NODE *)malloc(sizeof(NODE));

    printf("Enter a value BEFORE which data to be inserted: ");
    scanf("%d", &val1);
    printf("Enter a value to be inserted: ");
    scanf("%d", &val2);

    new_node->data = val2;
    ptr = start;

    while (ptr->data != val1)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return start;
}

NODE *insert_after(NODE *start)
{
    NODE *new_node, *ptr;
    int val1, val2;

    new_node = (NODE *)malloc(sizeof(NODE));

    printf("Enter a value AFTER which data to be inserted: ");
    scanf("%d", &val1);
    printf("Enter a value to be inserted: ");
    scanf("%d", &val2);

    new_node->data = val2;
    ptr = start;

    while (ptr->data != val1)
        ptr = ptr->next;
    new_node->next = ptr->next;
    ptr->next = new_node;
    return start;
}

NODE *delete_beg(NODE *start)
{
    NODE *ptr, *preptr;
    ptr = start;

    while (ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = start->next;
    free(start);
    start = ptr->next;
    return start;
}

NODE *delete_end(NODE *start)
{
    NODE *ptr, *preptr;
    ptr = start;

    while (ptr->next != start)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

NODE *delete_node(NODE *start)
{
    NODE *ptr, *preptr;
    int val;
    ptr = start;

    printf("Enter a value to be deleted: ");
    scanf("%d", &val);

    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}

NODE *delete_after(NODE *start)
{
    NODE *ptr, *preptr;
    int val;
    ptr = start;
    preptr = ptr;

    printf("Enter a value AFTER which the node has to be deleted: ");
    scanf("%d", &val);

    while (preptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    if (ptr == start)
        start = preptr->next;

    free(ptr);
    return start;
}

NODE *delete_list(NODE *start)
{
    NODE *ptr;
    ptr = start;

    while (ptr->next != start)
        start = delete_end(start);
    free(start);
    return start;
}
NODE *sort_list(NODE *start)
{
    NODE *ptr1, *ptr2;
    int temp;
    ptr1 = start;

    while (ptr1->next != start)
    {
        ptr2 = ptr1->next;
        while (ptr2->next != start)
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
    return start;
}
