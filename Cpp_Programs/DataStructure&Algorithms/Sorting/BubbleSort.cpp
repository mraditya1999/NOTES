#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag)
            break;
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

    bubbleSort(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);
    return 0;
}
