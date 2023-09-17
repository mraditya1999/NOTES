// It is a group of variables of similar data types referred to by a single element.
// Its elements are stored in a contiguous memory location.
// The size of the array should be mentioned while declaring it.
// Array elements are always counted from zero (0) onward.
// Array elements can be accessed using the position of the element in the array.
// If any element is not initialized, it will be assigned a garbage value.
// If any element is initialized,then the remaining elements will be assigned a 0.

// The array can have one or more dimensions.
#include <iostream>
using namespace std;

int main()
{
    // Declaration of array
    // int array[5];
    // int array[5] = {1, 2, 3, 4, 5};
    // int array[5] = {1, 1, 1, 1, 1};
    // int array[5] = {};
    // int array[5] = {0};
    // int array[5] = {1};
    int *array = new int[5];

    for (int i = 0; i < 5; i++)
        cout << "array[" << i << "] = " << array[i] << endl;

    return 0;
}
