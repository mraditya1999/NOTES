//1 2 3 4 5 6
//2 1 4 3 6 5
#include <stdio.h>

void swapAlternate(int[], int);
void printArray(int [],int);
void swap(int[],int,int);

void main()
{
    int arr[1000];
    int n, i, rotate;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nBefore Swapping: ");
    printArray(arr,n);

    swapAlternate(arr, n);
    printf("\nAfter Swapping: ");
    printArray(arr,n);
}

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n-1; i = i+2)
            swap(arr,i,i+1);
}

void swap(int arr[],int a,int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ",arr[i]);    
}