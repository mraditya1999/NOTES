#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> d(5, 1); // create dequeue of size 5 and initialize it with -1, by default initialize with 0
    d.push_back(2);
    d.push_front(2);
    d.pop_back();
    d.pop_front();
    cout << "Size of dequeue is: " << d.size() << endl;           // return no. of elements stored
    cout << "value at index 0 is: " << d.at(0) << endl;           // return element at index
    cout << "Is dequeue Empty: " << d.empty() << endl;            // chect if dequeue is emty or not
    cout << "First Element of dequeue is: " << d.front() << endl; // return first element
    cout << "Last Element of dequeue is: " << d.back() << endl;   // return last element
    d.erase(d.begin(), d.end());                                  // empty the deque but capacity  will remain allocated
    return 0;
}
