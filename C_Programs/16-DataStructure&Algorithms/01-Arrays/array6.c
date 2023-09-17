// Write a program to delete all the duplicate entries from an array of n integers.

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter no. of elements you want to store in Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    while (j <= n)
                    {
                        arr[j] = arr[j + 1];
                        j++;
                    }
                    count++;
                }
            }
        }
    }
    for (int i = 0; i < n - count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}