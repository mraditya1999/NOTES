#include <stdio.h>
#include <stdlib.h>

typedef struct doubly_ll
{
    struct doubly_ll *prev;
    int data;
    struct doubly_ll *next;
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
NODE *delete_before(NODE *);
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
        printf("\n 9: Delete a node before a given node");
        printf("\n 10: Delete a given node");
        printf("\n 11: Delete a node after a given node");
        printf("\n 12: Delete the entire list");
        printf("\n 13: Sort the list");
        printf("\n 14: EXIT");
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
            start = delete_before(start);
            printf("NODE DELETED before a given node....");
            break;

        case 10:
            start = delete_node(start);
            printf("NODE DELETED....");
            break;

        case 11:
            start = delete_after(start);
            printf("NODE DELETED after a given node...");
            break;

        case 12:
            start = delete_list(start);
            printf("LINKED LIST DELETED...\n");
            break;

        case 13:
            start = sort_list(start);
            break;
        }
    } while (choice != 14);
}

NODE *create_ll(NODE *start)
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
    return start;
}

NODE *display_ll(NODE *start)
{
    NODE *ptr;
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
    return start;
}

NODE *insert_beg(NODE *start)
{
    NODE *new_node, *ptr;
    int value;

    printf("Enter the value to be inserted at Beginning: ");
    scanf("%d", &value);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = value;
    new_node->prev = NULL;

    new_node->next = start;
    start = new_node;
    return start;
}

NODE *insert_end(NODE *start)
{
    NODE *new_node, *ptr;
    int value;

    printf("Enter the value to be inserted at End: ");
    scanf("%d", &value);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = value;

    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = NULL;
    return start;
}

NODE *insert_before(NODE *start)
{
    NODE *new_node, *ptr, *preptr;
    int val1, val2;

    printf("Enter a value BEFORE which data to be inserted: ");
    scanf("%d", &val1);
    printf("Enter a value to be inserted: ");
    scanf("%d", &val2);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = val2;
    ptr = start;

    while (ptr->data != val1)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->prev = preptr;
    new_node->next = ptr;
    return start;
}

NODE *insert_after(NODE *start)
{
    NODE *new_node, *ptr;
    int val1, val2;

    printf("Enter a value AFTER which data to be inserted: ");
    scanf("%d", &val1);
    printf("Enter a value to be inserted: ");
    scanf("%d", &val2);

    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = val2;
    ptr = start;

    while (ptr->data != val1)
        ptr = ptr->next;
    new_node->next = ptr->next;
    new_node->prev = ptr;
    ptr->next = new_node;

    return start;
}

NODE *delete_beg(NODE *start)
{
    NODE *ptr;
    ptr = start;

    start = start->next;
    start->prev = NULL;
    free(ptr);
    return start;
}

NODE *delete_end(NODE *start)
{
    NODE *ptr, *preptr;
    ptr = start;

    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->prev->next = NULL;
    free(ptr);
    return start;
}

NODE *delete_before(NODE *start)
{
    NODE *ptr, *preptr;
    int value;

    printf("Enter a value BEFORE which a node has to be deleted: ");
    scanf("%d", &value);
    ptr = start;
    while (ptr->data != value)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->prev->next = ptr;
    ptr->prev = preptr->prev;
    free(preptr);
    return start;
}

NODE *delete_node(NODE *start)
{
    int value;
    NODE *ptr, *preptr;
    printf("Enter a value which is to be deleted: ");
    scanf("%d", &value);

    ptr = start;

    while (ptr->data != value)
        ptr = ptr->next;
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    free(ptr);

    return start;
}
NODE *delete_after(NODE *start)
{
    NODE *ptr, *ptr2;
    int val1;

    printf("Enter a value AFTER which data has to be deleted: ");
    scanf("%d", &val1);

    ptr = start;

    while (ptr->data != val1)
        ptr = ptr->next;
    ptr2 = ptr->next;
    ptr->next = ptr->next->next;
    ptr->next->prev = ptr;
    free(ptr2);

    return start;
}

NODE *delete_list(NODE *start)
{
    while (start->next != NULL)
        start = delete_end(start);
    free(start);

    return start;
}

NODE *sort_list(NODE *start)
{
    int temp;
    NODE *ptr1, *ptr2;

    ptr1 = start;

    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
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