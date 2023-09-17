#include <stdio.h>
#define MAX 100

int size;
int findLargest(int *ptr)
{
    static int i = 0, max = -99999;
    if (i < size)
    {
        if (*ptr > max)
            max = *ptr;
        i++;
        findLargest(ptr + 1);
    }
    return max;
}

int main()
{
    int arr[MAX], max, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("\nEnter %d elements:\n", size);

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = findLargest(arr);
    printf("\nLargest element of the array is: %d", max);
    return 0;
}
