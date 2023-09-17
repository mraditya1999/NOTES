#include <iostream>
using namespace std;

int main()
{
    // int arr[10]; //If user have to insert more elements it cannot be done

    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;
    // int arr[size]; //This array is created in stack ,If user have to increase size of array later, it cannot be done

    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;
    // int *p = new int[size]; // This array is created in heap ,If user have to increase size of array later, it can be done

    //      OR

    // int *p = new int[5]; // If user have to insert more elements it can be done
    // but before changing pointer p to new array  we should delete p whiich is a good practice
    // delete[] p;
    // p = new int[10];

    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p = arr;

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << p[i] << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << i[arr] << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << i[p] << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << *(arr + i) << " ";

    cout << endl;

    for (int i = 0; i < 6; i++)
        cout << *(p + i) << " ";

    return 0;
}
