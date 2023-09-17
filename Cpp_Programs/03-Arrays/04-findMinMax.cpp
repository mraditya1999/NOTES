#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void findminAndmax(int arr[], int size);

int main()
{
    int arr[100];
    int size;

    cout << "Enter no. of elements in Array: ";
    cin >> size;

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    printArray(arr, size);
    findminAndmax(arr, size);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void findminAndmax(int arr[], int size)
{
    int minValue = arr[0];
    int maxValue = arr[0];
    for (int i = 0; i < size; i++)
    {

        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
        // if (arr[i] < minValue)
        //     minValue = arr[i];
        // if (arr[i] > maxValue)
        //     maxValue = arr[i];
    }

    cout << "minValue: " << minValue << endl;
    cout << "maxValue: " << maxValue << endl;
}