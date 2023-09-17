#include <stdio.h>
int stack[10], top = -1;

void push(int);
int pop();

void main()
{
    int arr[10];
    int val, n, i;

    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\n Enter %d elements of the array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nArray Element Before: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < n; i++)
        push(arr[i]);

    for (i = 0; i < n; i++)
        arr[i] = pop();

    printf("\nArray Element After: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void push(int val)
{
    stack[++top] = val;
}

int pop()
{
    return (stack[top--]);
}