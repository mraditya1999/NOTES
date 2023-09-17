#include <stdio.h>

void swap(int[], int, int);
void quicksort(int[], int, int);
int partition(int[], int, int);

void main()
{
    int arr[1000];
    int n, i;

    printf("Enter no. of elements you want to store: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nunsorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    quicksort(arr, 0, n - 1);

    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void quicksort(int arr[], int beg, int end)
{
    int pivot;
    if (beg < end)
    {
        pivot = partition(arr, beg, end);
        quicksort(arr, beg, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}

int partition(int arr[], int beg, int end)
{
    int pivot = arr[beg]; 
    int i = beg;
    int j = end;

    while (i < j)
    {
        while (i <= end && arr[i] <= pivot) i++;

        while (arr[j] > pivot) j--;

        if (i < j) swap(arr, i, j);
    }
    swap(arr, j, beg);
    return j;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


// int partition(int arr[], int beg, int end)
// {
//     int left, right, pivot, temp, flag;

//     pivot = left = beg;
//     right = end;
//     flag = 0;

//     while (flag != 1)
//     {    
//         while (arr[pivot] <= arr[right] && (pivot != right))
//             right--;

//         if (right == pivot)
//             flag = 1;
//         else if (arr[pivot] > arr[right])
//         {
//             swap(arr, pivot, right);
//             pivot = right;
//         }

//         if (flag != 1)
//         {
//             while (arr[pivot] >= arr[left] && (pivot != left))
//                 left++;

//             if (pivot == left)
//                 flag = 1;

//             else if (arr[pivot] < arr[left])
//             {
//                 swap(arr, pivot, left);
//                 pivot = left;
//             }
//         }
//     }

//     return pivot;
// }
