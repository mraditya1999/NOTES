#include <stdio.h>

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);
void printArray(int arr[], int n);

void main()
{
    int arr[1000],n,i;

    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("\nEnter %d elements : ",n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    heapSort(arr, n);

    printf("Sorted array is: ");
    printArray(arr, n);
}

void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Heap sort
    for (int i = n - 1; i >= 0; i--)  
    {
        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at root again
        heapify(arr, i, 0);
      }
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}

/*

#include <stdio.h>
#define MAX 10

void RestoreHeapUp(int *, int);
void RestoreHeapDown(int *, int, int);

void main()
{
    int Heap[MAX], i, j,n;
    printf("\n Enter the number of elements : ");
    scanf("%d", &n);
    printf("\n Enter the elements : ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &Heap[i]);
        RestoreHeapUp(Heap, i); // Heapify
    }
    
   // Delete the root element and heapify the heap
        j = n;
    for (i = 1; i <= j; i++)
    {
        int temp;
        temp = Heap[1];
        Heap[1] = Heap[n];
        Heap[n] = temp;
        n = n - 1;                   // The element Heap[n] is supposed to be deleted
        RestoreHeapDown(Heap, 1, n); // Heapify
    }
    n = j;
    printf("\n The sorted elements are: ");
    for (i = 1; i <= n; i++)
        printf("%4d", Heap[i]);
}
void RestoreHeapUp(int *Heap, int index)
{
    int val = Heap[index];
    while ((index > 1) && (Heap[index / 2] < val)) // Check parent's value
    {
        Heap[index] = Heap[index / 2];
        index /= 2;
    }
    Heap[index] = val;
}
void RestoreHeapDown(int *Heap, int index, int n)
{
    int val = Heap[index];
    int j = index * 2;
    while (j <= n)
    {
        if ((j < n) && (Heap[j] < Heap[j + 1])) // Check sibling's value
            j++;
        if (Heap[j] < Heap[j / 2]) // Check parent's value
            break;
        Heap[j / 2] = Heap[j];
        j = j * 2;
    }
    Heap[j / 2] = val;
}

*/