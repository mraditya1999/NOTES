// recursive function is a function which call itself.

#include <iostream>
using namespace std;

bool linearSearchUsingIteration(int[], int, int);
bool linearSearchUsingRecursion(int[], int, int);

int main()
{
    int arr[100];
    int size;
    int key;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter the key: ";
    cin >> key;

    if (linearSearchUsingRecursion(arr, size, key))
        cout << "Key is found" << endl;
    else
        cout << "Key is not found" << endl;

    if (linearSearchUsingIteration(arr, size, key))
        cout << "Key is found" << endl;
    else
        cout << "Key is not found" << endl;
}

bool linearSearchUsingRecursion(int arr[], int size, int key)
{
    if (size == 0)
        return false;
    if (arr[size - 1] == key)
        return true;
    return linearSearchUsingRecursion(arr, size - 1, key);
}

bool linearSearchUsingIteration(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}