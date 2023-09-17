#include <stdio.h>
void reverseAnArray(int[], int);
void reverseAnArray2(int[], int);
void reverseAnArray3(int [], int);

void main()
{
    int arr[1000];
    int n, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    //reverseAnArray(arr, n);
    //reverseAnArray2(arr, n);
    reverseAnArray3(arr,n);
}

void reverseAnArray(int arr[], int len)
{
    int i, temp;
        for (i = 0; i < len/2; i++)
        {
            {
                temp = arr[i];
                arr[i] = arr[len-i-1];
                arr[len-i-1] = temp;
            }
        }
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

void reverseAnArray2(int arr[], int len)
{
    int i, temp,st=0,end=len-1;
    while(st <= end)
    {
                temp = arr[st];
                arr[st] = arr[end];
                arr[end] = temp;
                st++;
                end--;
    }
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

void reverseAnArray3(int arr[], int len)
{
    int i, arr1[len];
        for (i = 0; i < len; i++)
            arr1[i] = arr[len-i-1]; 
    for (i = 0; i < len; i++)
        printf("%d ", arr1[i]);
}