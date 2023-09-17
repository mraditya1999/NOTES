#include <iostream>
using namespace std;

void mergeTwoSortedArray(int[], int, int[], int, int[]);
void printArray(int arr[], int n);

int main()
{
    int arr1[] = {1, 5, 8, 9};
    int arr2[] = {2, 3, 4, 6, 7};
    int arr3[10] = {0};

    mergeTwoSortedArray(arr1, 4, arr2, 5, arr3);
}

void mergeTwoSortedArray(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < size2)
    {
        arr3[k++] = arr2[j++];
    }

    printArray(arr3, 9);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
