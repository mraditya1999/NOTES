#include <stdio.h>
#include <stdlib.h>

void countsort(int[], int);
int maximum(int[], int);
void printArray(int[], int);

void main()
{
    int arr[] = {8, 1, 1, 9, 12, 2, 67, 58};
    int n = 8;

    printf("\nUnsorted Array: ");
    printArray(arr, n);

    countsort(arr, n);

    printf("\nSorted Array: ");
    printArray(arr, n);
}

void countsort(int arr[], int n)
{
    int max, i = 0, j = 0;

    max = maximum(arr, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i <= max; i++)
        count[i] = 0;

    for (i = 0; i < n; i++)
        count[arr[i]]++;

    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i]--;
            j++;
        }
        else
            i++;
    }
}

int maximum(int arr[], int n)
{
    int max, i;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}