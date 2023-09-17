// Search an Array element

#include<stdio.h>

void linearSearch(int[], int, int);
void binarySearch(int[], int, int);

int main()
{
    int arr[1000];
    int n, i, key;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value you want to search: ");
    scanf("%d", &key);

    linearSearch(arr, n, key);
    binarySearch(arr, n, key);

    return 0;
}

void linearSearch(int arr[], int len, int key)
{
    int i,f=0;
    for ( i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            f=1;
            break;
        }
    }
    if(f == 1)
    printf("Element found at index %d: ",i);
    else
    printf("Element not found");
    
}

void binarySearch(int arr[], int len, int key)
{
    int i, f=0, st = 0, end = (len - 1), mid;

    while (st <= end)
    {
        mid = (st + end) / 2;

        if (arr[mid] == key)
        {
            f = 1;
            break;
        }
        else if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] < key)
            st = mid + 1;
    }

    if (f == 1)
    printf("Element found at index %d",mid);
    else
    printf("Element not found\n");
}
