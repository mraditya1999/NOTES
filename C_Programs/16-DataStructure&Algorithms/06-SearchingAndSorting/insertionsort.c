#include <stdio.h>
void insertionsort(int[], int);

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
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    insertionsort(arr, n);

    printf("\nSorted array  : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void insertionsort(int arr[], int len)
{
    int i, j, current;
    for (i = 1; i < len; i++)
    {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}