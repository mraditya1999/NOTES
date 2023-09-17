// Update an Array element

#include <stdio.h>
void updateArrElementByIndex(int[], int, int, int);
void updateArrElementByPosition(int[], int, int, int);
void updateArrElementByValue(int[], int, int, int);

int main()
{
    int arr[1000];
    int n, pos, index, arrvalue, i, upvalue;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter update value to update: ");
    scanf("%d", &upvalue);

    // printf("Enter Array element position you want to update value: ");
    // scanf("%d", &pos);
    // printf("Enter Array element index you want to update value: ");
    // scanf("%d", &index);
    printf("Enter value you want to update: ");
    scanf("%d", &arrvalue);

    // updateArrElementByPosition(arr, n, pos,upvalue);
    // updateArrElementByIndex(arr, n, index, upvalue);
    updateArrElementByValue(arr, n, arrvalue, upvalue);

    return 0;
}

void updateArrElementByPosition(int arr[], int len, int pos, int upvalue)
{
    int i, f = 0;

    if (pos > 0 && pos < len)
    {
        f = 1;
        pos--;
        arr[pos] = upvalue;
    }
    if (f == 0)
        printf("No value to update ");
    else
        for (int i = 0; i < len; i++)
            printf("%d ", arr[i]);
}

void updateArrElementByIndex(int arr[], int len, int index, int upvalue)
{
    int i, f = 0;
    if (index >= 0 && index < len)
    {
        f = 1;
        arr[index] = upvalue;
    }
    if (f == 0)
        printf("No index found\n");
    else
        for (int i = 0; i < len; i++)
            printf("%d ", arr[i]);
}

void updateArrElementByValue(int arr[], int len, int arrvalue, int upvalue)
{
    int i, f = 0;

    for (i = 0; i < len; i++)
        if (arr[i] == arrvalue)
        {
            f = 1;
            break;
        }
    arr[i] = upvalue;
    if (f == 0)
        printf("No value found to replace\n");
    else
        for (int i = 0; i < len; i++)
            printf("%d ", arr[i]);
}
