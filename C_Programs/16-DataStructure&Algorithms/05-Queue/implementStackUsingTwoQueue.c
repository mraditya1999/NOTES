#include <stdio.h>
#define MAX 5

int queue[MAX], stackQueue[MAX];
int front = -1, rear = -1, top = -1;
void enqueue();
int dequeue(void);
void display();

void implementStackUsingQueue();
void push();
int pop();
int peek();
void display_stack();

void main()
{
    int choice, val;
    do
    {
        printf("\n\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.DISPLAY");
        printf("\n4.implementStackUsingQueue");
        printf("\n5.EXIT");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            val = dequeue();
            if (val != -1)
                printf("The deleted element from queue is: %d", val);
            break;

        case 3:
            display();
            break;

        case 4:
            implementStackUsingQueue();
            break;

        case 5:
            break;

        default:
            printf("\nEnter valid choice!!");
            break;
        }
    } while (choice != 5);
}

void enqueue()
{
    int val;

    if (rear == MAX - 1)
    {
        printf("OVERFLOW!!");
        return;
    }

    printf("Enter a value to be inserted in queue: ");
    scanf("%d", &val);

    if (rear == -1 && front == -1)
        rear = front = 0;
    else
        rear++;
    queue[rear] = val;
}

int dequeue()
{
    int val;

    if (front == -1)
    {
        printf("UNDERFLOW!!\n");
        return -1;
    }

    val = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;

    return val;
}

void display()
{
    int i;
    if (front == -1)
        printf("QUEUE IS EMPTY!!\n");
    else
    {
        printf("Queue elements are: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

void implementStackUsingQueue()
{
    int val, choice;

    do
    {
        printf("\n1.PUSH");
        printf("\n2.POP");
        printf("\n3.PEEK");
        printf("\n4.DISPLAY");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
            break;

        case 3:
            peek();

        case 4:
            display_stack();
            break;

        case 5:
            break;

        default:
            printf("Enter valid choice!!");
            break;
        }

    } while (choice != 5);
}

void push()
{
    int val;
    val = dequeue();
    if (top < MAX)
    {
        top++;
        stackQueue[top];
    }
    else
        printf("\nOVERFLOW");
}

int pop()
{
    if (top == -1)
        printf("\nUNDERFLOW!!");
    else
        return stackQueue[top--];
}

int peek()
{
    if (top != -1)
        return stackQueue[top];
}

void display_stack()
{
    int i;
    if (top == -1)
        printf("Stack is Empty!!");
    else
    {
        printf("Stack elements are: ");
        for (i = top; i >= 0; i++)
            printf("%d ", stackQueue[i]);
    }
}