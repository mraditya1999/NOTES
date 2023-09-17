#include <stdio.h>
int binarySearch(int[], int, int,int);

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

    index = binarySearch(arr,0,n-1, key);

    if (index != -1)
        printf("Element found at index: %d", index);
    else
        printf("Element not found");
}

int binarySearch(int arr[],int st,int end, int key)
{
    int mid = (st + end)/2;

    if(st  == end)
        return -1;

    if(arr[mid] > key)
        return binarySearch(arr,st,mid,key);

    if(arr[mid] < key)
        return binarySearch(arr,mid+1,end,key);

    else
        return mid;
}
