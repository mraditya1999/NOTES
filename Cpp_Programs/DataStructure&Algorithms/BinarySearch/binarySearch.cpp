#include <iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key);
void printArray(int arr[], int n);

int main()
{
    int arr[100];
    int size;
    int key;

    cout << "Enter no. of elements in Array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter key elements to found: ";
    cin >> key;

    if (binarySearch(arr, size, key))
        cout << key << " found ";
    else
        cout << key << " not found ";
}

bool binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return true;

        else if (arr[mid] < key)
            start = mid + 1;

        else if (arr[mid] > key)
            end = mid - 1;

        else
            return false;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
