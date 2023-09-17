#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (temp < arr[j])
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);
    return 0;
}
