#include <stdio.h>
void max_heap(int[], int);

void main()
{
    int heap[100];
    int n, i;

    printf("Enter no of elements in Heap: ");
    scanf("%d", &n);
    printf("\nEnter %d Elements: ");
    for (i = 1; i <= n; i++)
        scanf("%d", &heap[i]);

    max_heap(heap, n);
}

void max_heap(int arr[], int size)
{
    int i, left, right, largest;
    for (i = 1; i <= size; i++)
    {
        left = 2 * i;      // left child
        right = 2 * i + 1; // right child

        if (left <= size && arr[left] > arr[i])
            largest = left;
        else
            largest = i;

        if (right <= size && arr[right] > arr[largest])
            largest = right;

        if (largest != i)
        {
            swap(arr[i], arr[largest]);
            max_heapify(arr, largest, size);
        }
    }
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int idx)
{
}