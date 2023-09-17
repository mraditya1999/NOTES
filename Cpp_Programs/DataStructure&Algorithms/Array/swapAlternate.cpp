#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size);
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

    swapAlternate(arr, size);
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
        swap(arr[i], arr[i + 1]);

    cout << "Alternate swap of an Array is: ";
    printArray(arr, size);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
