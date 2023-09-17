#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key);
int lastOcc(int arr[], int size, int key);
int totalOcc(int arr[], int size, int key);
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

    cout << "First Ocurrence of " << key << " is: " << firstOcc(arr, size, key) << endl;
    cout << "Last Ocurrence of " << key << " is: " << lastOcc(arr, size, key) << endl;
    cout << "Total Ocurrence of " << key << " is: " << totalOcc(arr, size, key) << endl;
}

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key)
            start = mid + 1;

        else if (arr[mid] > key)
            end = mid - 1;

        else
            return false;
    }
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < key)
            start = mid + 1;

        else if (arr[mid] > key)
            end = mid - 1;
    }

    return ans;
}

int totalOcc(int arr[], int size, int key)
{

    int totalOcc(lastOcc(arr, size, key) - firstOcc(arr, size, key) + 1);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
