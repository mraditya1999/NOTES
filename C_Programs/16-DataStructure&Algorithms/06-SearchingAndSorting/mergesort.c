#include <stdio.h>

void divide(int[], int, int);
void conquer(int[], int, int, int);

void main()
{
    int arr[10];
    int n, i;
    printf("Enter no. of elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unsorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    divide(arr, 0, n - 1);

    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void divide(int arr[], int si, int ei)
{
    if (si < ei)
    {
        int mid = si + (ei - si) / 2;
        divide(arr, si, mid);
        divide(arr, mid + 1, ei);
        conquer(arr, si, mid, ei);
    }
}

void conquer(int arr[], int si, int mid, int ei)
{
    int i = 0, j = 0, n;
    n = ei - si + 1;
    int merged[n];

    int idx1 = si;
    int idx2 = mid + 1;

    while (idx1 <= mid && idx2 <= ei)
    {
        if (arr[idx1] <= arr[idx2])
            merged[i++] = arr[idx1++];
        else
            merged[i++] = arr[idx2++];
    }

    while (idx1 <= mid)
        merged[i++] = arr[idx1++];

    while (idx2 <= ei)
        merged[i++] = arr[idx2++];

    for (i = 0, j = si; i < n; i++, j++)
        arr[j] = merged[i];
}