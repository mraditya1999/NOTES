#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "Size of Array is: " << arr.size() << endl;
    cout << "Value at index 0 is: " << arr.at(0) << endl;
    cout << "Is Array Empty: " << arr.empty() << endl;
    cout << "First Element of Array is: " << arr.front() << endl;
    cout << "Last Element of Array is: " << arr.back() << endl;

    return 0;
}
