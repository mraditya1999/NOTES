#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    cout << endl;

    cout << "finding 9: " << binary_search(v.begin(), v.end(), 9) << endl;
    cout << "lower bound: " << lower_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << "upper bound: " << upper_bound(v.begin(), v.end(), 9) - v.begin() << endl;
    cout << "Maximum of 5 and 9: " << max(5, 9) << endl;
    cout << "Minimum of 5 and 9: " << min(5, 9) << endl;

    int a = 5;
    int b = 6;
    swap(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    string str = "Reverse a string";
    reverse(str.begin(), str.end());
    cout << str << endl;

    cout << "Before: ";
    for (int i : v)
        cout << i << " ";

    cout << endl;

    cout << "After rotating: ";
    rotate(v.begin(), v.begin() + 1, v.end());
    for (int i : v)
        cout << i << " ";

    cout << endl;

    cout << "After sorting: ";
    sort(v.begin(), v.end());
    for (int i : v)
        cout << i << " ";

    return 0;
}
