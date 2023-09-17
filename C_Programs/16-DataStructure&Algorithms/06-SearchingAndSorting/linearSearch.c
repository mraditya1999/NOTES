#include <stdio.h>

void linearSearch(int[], int, int);
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
    return 0;
}

void linearSearch(int arr[], int len, int key)
{
    int i, f = 0;
    for (i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("\nElement found at index %d: ", i);
        printf("\nElement found at position %d: ", i + 1);
    }
    else
        printf("Element not found");
}
