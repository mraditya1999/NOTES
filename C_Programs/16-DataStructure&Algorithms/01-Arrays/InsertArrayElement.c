// Add an Array element

#include <stdio.h>
void InsertArrElementByIndex(int[], int, int, int);
void InsertArrElementByPosition(int[], int, int, int);
void InsertArrElementByValue(int[], int, int, int);

int main()
{
    int arr[1000];
    int n, pos, index, value, i, key;
    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value you want to Add: ");
    scanf("%d", &key);

    //printf("Enter Array element position you want to Add: ");
    //scanf("%d", &pos);
    // printf("Enter Array element index you want to Add: ");
    // scanf("%d", &index);
     printf("Enter Array element you want to Add before: ");
     scanf("%d", &value);

    // insertArrElementByPosition(arr, n, pos, key);
    // insertArrElementByIndex(arr, n, index, key);
    insertArrElementByValue(arr, n, value, key);

    return 0;
}

void insertArrElementByPosition(int arr[], int len, int pos, int key)
{
    int i, f = 0;

    if (pos > 0)
    {
        pos--;
        for (i = len; i >= pos; i--)
        {

            f = 1;
            arr[i] = arr[i - 1];
        }
        arr[pos] = key;
    }
    if (f == 0)
        printf("No position found\n");
    else
        for (int i = 0; i <= len ; i++)
            printf("%d ", arr[i]);
}

void insertArrElementByIndex(int arr[], int len, int index, int key)
{
    int i, f = 0;
    if (index >= 0)
    {
        for (i = len; i > index; i--)
        {
            f = 1;
            arr[i] = arr[i - 1];
        }
        arr[index] = key;
    }
    if (f == 0)
        printf("No index found\n");
    else
        for (int i = 0; i < len + 1; i++)
            printf("%d ", arr[i]);
}

void insertArrElementByValue(int arr[], int len, int value, int key)
{
    int i, f = 0,j;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == value)
        {
            f = 1;
            for (j=len; j > i; j--)
                arr[j] = arr[j - 1];

                arr[j] = key;
                break;
        }
    }

    if (f == 0)
        printf("No value found\n");
    else
        for (int i = 0; i < len + 1; i++)
            printf("%d ", arr[i]);
}
