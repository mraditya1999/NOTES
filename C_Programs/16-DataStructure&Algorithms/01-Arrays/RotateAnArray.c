#include <stdio.h>
void rotateAnArray(int[], int, int);

void main()
{
    int arr[1000];
    int n, i, rotate;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter no. of rotations you want to perform: ");
    scanf("%d", &rotate);

    rotateAnArray(arr, n, rotate);
}

void rotateAnArray(int arr[], int len, int rotate)
{
    int i, j, temp;
    for (i = 0; i < rotate; i++)
    {
        temp = arr[len - 1];

        for (j = len - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
