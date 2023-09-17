#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[smallest] > arr[j])
                smallest = j;
        }
        swap(arr[smallest], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[1000];
    int size;

    cout << "Enter a number of elements in Array: ";
    cin >> size;

    cout << "Enter " << size << " Elemenets: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Unsorted Array: ";
    printArray(arr, size);

    selectionSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);
    return 0;
}
