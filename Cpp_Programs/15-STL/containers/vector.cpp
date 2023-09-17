#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(5, -1);     // create vector of size 5 and initialize it with -1, by default initialize with 0
    vector<int> newVector(v); // copy vector v to newVector
    v.push_back(5);
    v.pop_back();
    cout << "Capacity of Vector is: " << v.capacity() << endl;   // return total elements it can store
    cout << "Size of Vector is: " << v.size() << endl;           // return no. of elements stored
    cout << "Value at index 0 is: " << v.at(0) << endl;          // return element at index
    cout << "Is Vector Empty: " << v.empty() << endl;            // chect if vector is emty or not
    cout << "First Element of Vector is: " << v.front() << endl; // return first element
    cout << "Last Element of Vector is: " << v.back() << endl;   // return last element
    v.clear();                                                   // empty the vector but capacity  will remain allocated

    vector<int> v2 = {10, 20, 30};
    v2.push_back(40);
    v2.pop_back();

    // Method 1
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // Method 2
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    // Method 3
    vector<int>::iterator it;
    for (it = v2.begin(); it != v2.end(); it++)
        cout << *it << " ";

    return 0;
}
