#include <stdio.h>

void bubblesort(int[], int);
void swap(int[], int, int);
void printArray(int[], int);

void main()
{
    int arr[1000];
    int n, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nUnsorted array: ");
    printArray(arr, n);

    bubblesort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);
}

void bubblesort(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}