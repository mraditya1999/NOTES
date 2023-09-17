#include <iostream>
// for each loop works with collection of elements like array
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    // for (int element : arr)
    //     cout << element << " ";

    // we can also use auto keyword to declare the variable
    // In this we dont need to specify the type of the variable
    for (auto element : arr)
        cout << element << " ";

    return 0;
}
