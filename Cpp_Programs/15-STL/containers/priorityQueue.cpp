#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // max-heap
    priority_queue<int> max_heap;

    max_heap.push(1);
    max_heap.push(4);
    max_heap.push(8);
    max_heap.push(10);
    max_heap.push(11);
    cout << "Size of queue is: " << max_heap.size() << endl; // return no. of elements stored
    cout << "Is queue Empty: " << max_heap.empty() << endl;  // chect if queue is emty or not

    int size1 = max_heap.size();
    for (int i = 0; i < size1; i++)
    {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }

    cout << endl;

    // min-heap
    priority_queue<int, vector<int>, greater<int>> min_heap;

    min_heap.push(1);
    min_heap.push(4);
    min_heap.push(8);
    min_heap.push(10);
    min_heap.push(11);

    cout << "Size of queue is: " << min_heap.size() << endl; // return no. of elements stored
    cout << "Is queue Empty: " << min_heap.empty() << endl;  // chect if queue is emty or not

    int size2 = min_heap.size();
    for (int i = 0; i < size2; i++)
    {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }

    return 0;
}
