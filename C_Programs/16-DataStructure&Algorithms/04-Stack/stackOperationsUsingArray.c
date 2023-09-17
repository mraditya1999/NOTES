#include <stdio.h>
#define MAX 3

int stack[MAX], TOP = -1;

void push(int[], int);
int pop(int[]);
int peek(int[]);
void display(int[]);

void main()
{
    int val, choice;

    do
    {
        printf("\n***** MAIN MENU *****");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value to be pushed in stack: ");
            scanf("%d", &val);
            push(stack, val);
            break;

        case 2:
            pop(stack);
            if (val != -1)
                printf("The value deleted from stack is: %d", val);
            break;

        case 3:
            peek(stack);
            if (val != -1)
                printf("The value stored at top of stack is %d: ", val);
            break;

        case 4:
            display(stack);
            break;

        default:
            break;
        }

    } while (choice != 5);
}

void push(int st[], int val)
{
    if (TOP == MAX - 1)
        printf("STACK OVERFLOW!!");
    else
    {
        TOP++;
        st[TOP] = val;
    }
}

int pop(int st[])
{
    int val;
    if (TOP == -1)
    {
        printf("\nSTACK UNDERFLOW!!");
        return -1;
    }
    else
    {
        val = st[TOP];
        TOP--;
        return val;
    }
}

void display(int st[])
{
    int i;
    if (TOP == -1)
        printf("\nSTACK IS EMPTY...");
    else
    {
        for (i = TOP; i >= 0; i--)
            printf("%d ", st[i]);
        printf("\n");
    }
}

int peek(int st[])
{
    if (TOP == -1)
    {
        printf("\nSTACK IS EMPTY...");
        return -1;
    }
    else
        return st[TOP];
}