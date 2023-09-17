#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 65, 4, 34, 889, 6, 7, 645, 5};
    int start = 0, end = 9;
    int key;

    cout << "Enter key to search in array: ";
    cin >> key;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            cout << "key found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "No key found in array" << endl;

    return 0;
}
