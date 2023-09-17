// 2-D Array Declaration
// int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
//              OR
// int arr2[2][3] = {1, 2, 3, 4, 5, 6};

#include <iostream>
using namespace std;

int main()
{

    int arr1[2][3];

    cout << "Enter the elements of the 2-D array: " << endl;
    for (auto &rowElement : arr1)
    {
        for (auto &columnElement : rowElement)
        {
            cin >> columnElement;
        }
    }

    for (auto &rowElement : arr1)
    {
        for (auto &columnElement : rowElement)
        {
            cout << columnElement << " ";
        }
        cout << endl;
    }

    return 0;
}
