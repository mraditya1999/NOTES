#include <stdio.h>
int binarySearch(int[], int, int);

void main()
{
    int arr[1000];
    int n, i, key, index;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value you want to search: ");
    scanf("%d", &key);

    index = binarySearch(arr, n, key);

    if (index != -1)
        printf("Element found at index: %d", index);
    else
        printf("Element not found");
}

int binarySearch(int arr[], int len, int key)
{
    int i, f = 0, st = 0, end = (len - 1), mid;

    while (st <= end)
    {
        mid = (st + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else
            st = mid + 1;
    }
    return -1;
}
