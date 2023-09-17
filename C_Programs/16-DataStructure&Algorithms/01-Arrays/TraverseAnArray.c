#include <stdio.h>
void arrTraversing(int[], int);

void main()
{
    int arr[1000];
    int n, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ",n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    arrTraversing(arr, n);
}

void arrTraversing(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}