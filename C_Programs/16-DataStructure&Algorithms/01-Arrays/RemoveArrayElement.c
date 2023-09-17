// Remove an Array element

#include <stdio.h>
void removeArrElementByIndex(int[], int, int);
void removeArrElementByPosition(int[], int, int);
void removeArrElementByValue(int[], int, int);
int main()
{
    int arr[1000];
    int n, pos, index, value, i;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // printf("Enter Array element position you want to remove: ");
    // scanf("%d", &pos);
    //printf("Enter Array element index you want to remove: ");
    //scanf("%d", &index);
     printf("Enter Array element you want to remove: ");
     scanf("%d", &value);

    // removeArrElementByPosition(arr, n, pos);
    //removeArrElementByIndex(arr, n, index);
     removeArrElementByValue(arr, n, value);

    return 0;
}

void removeArrElementByPosition(int arr[], int len, int pos)
{
    int i, f = 0;

    if (pos > 0)
    {
        pos--;
        for (i = pos; i < len; i++)
        {

            f = 1;
            arr[i] = arr[i + 1];
        }
    }
    if (f == 0)
        printf("No position found\n");
    else
        for (int i = 0; i < len - 1; i++)
            printf("%d ", arr[i]);
}

void removeArrElementByIndex(int arr[], int len, int index)
{
    int i, f = 0;
    if (index >= 0)
    {
        for (i = index; i < len; i++)
        {
            f = 1;
            arr[i] = arr[i + 1];
        }
    }
    if (f == 0)
        printf("No index found\n");
    else
        for (int i = 0; i < len - 1; i++)
            printf("%d ", arr[i]);
}

void removeArrElementByValue(int arr[], int len, int value)
{
    int i, f = 0;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == value)
        {
            f = 1;
            for (; i < len; i++)
                arr[i] = arr[i + 1];
        }
    }

    if (f == 0)
        printf("No value found\n");
    else
        for (int i = 0; i < len - 1; i++)
            printf("%d ", arr[i]);
}
