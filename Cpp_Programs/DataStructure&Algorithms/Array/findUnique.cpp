// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1](odd).
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include <iostream>
using namespace std;

int findUniqueElements(int arr[], int size);
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

    cout << findUniqueElements(arr, size);
}

int findUniqueElements(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
    // for (int i = 0; i < size; i++)
    // {
    //     int flag = 1;
    //     for (int j = 0; j < size; j++)
    //     {
    //         if ((i != j) && (arr[i] == arr[j]))
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if (flag == 1)
    //     {
    //         ans = arr[i];
    //         break;
    //     }
    // }
    // return ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
