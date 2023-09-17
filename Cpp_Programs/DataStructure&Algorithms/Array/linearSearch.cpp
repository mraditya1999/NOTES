#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 65, 4, 34, 889, 6, 7, 645, 5};
    int key;

    cout << "Enter key to search in array: ";
    cin >> key;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            cout << "Key found at index: " << i << endl;
            return 0;
        }
    }
    cout << "No key found in array" << endl;

    return 0;
}
