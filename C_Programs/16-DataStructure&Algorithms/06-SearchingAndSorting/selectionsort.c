#include <stdio.h>

void selectionsort(int arr[], int n);
void swap(int arr[], int i, int j);
void printArray(int arr[], int n);

void main()
{
    int arr[1000];
    int n, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nunsorted array: ");
    printArray(arr, n);

    selectionsort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);
}

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallest] > arr[j])
                smallest = j;
        }
        swap(arr, smallest, i);
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