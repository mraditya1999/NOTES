// A function that returns a pointer to an array

#include <iostream>
using namespace std;

int *initializeArray(int);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *array = initializeArray(size);
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";

    return 0;
}

int *initializeArray(int size)
{
    int *array = new int[size];
    for (int i = 0; i < size; i++)
        array[i] = i + 1;

    return array;
}

// error, We cannot return the address of a local variable because the local variable will be destroyed when the function returns.
// int *fun()
// {
//     int a = 10;
//     return &a;
// }