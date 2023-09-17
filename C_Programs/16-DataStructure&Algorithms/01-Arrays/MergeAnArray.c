// Merge a sorted & unsorted Array element

#include <stdio.h>
void mergeSortedArray(int[], int, int[], int);
void mergeUnsortedArray(int[], int, int[], int);

int main()
{
    int a[1000], b[1000], n1, n2;

    printf("Enter no. of elements you want to store in first Array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter no. of elements you want to store in second Array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    mergeSortedArray(a, n1, b, n2);
    // mergeUnsortedArray(a, n1, b, n2);
    return 0;
}

void mergeSortedArray(int a[], int n1, int b[], int n2)
{
    int len = n1 + n2;
    int arr[len], i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            arr[k++] = a[i++];

        else
            arr[k++] = b[j++];
    }

    while (i < n1)
        arr[k++] = a[i++];

    while (j < n2)
        arr[k++] = b[j++];

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

void mergeUnsortedArray(int a[], int n1, int b[], int n2)
{
    int len = n1 + n2;
    int arr[len], i = 0, j = 0, k = 0;
    while (i < n1)
        arr[k++] = a[i++];

    while (j < n2)
        arr[k++] = b[j++];

    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}
