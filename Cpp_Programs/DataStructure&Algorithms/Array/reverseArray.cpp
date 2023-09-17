#include <iostream>
using namespace std;

void reverseArray(int arr[], int size);
void printArray(int arr[], int n);

int main()
{
    int arr[100];
    int size;

    cout << "Enter no. of elements in Array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    reverseArray(arr, size);
}

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < (size / 2); i++)
        swap(arr[i], arr[size - 1 - i]);

    // for (int start = 0, end = (size - 1); start <= end; start++, end--)
    //     swap(arr[start], arr[end]);

    cout << "Reverse of an Array is: ";
    printArray(arr, size);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
