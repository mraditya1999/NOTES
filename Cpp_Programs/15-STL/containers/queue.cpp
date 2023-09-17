#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(1);
    q.push(1);
    q.pop();
    cout << "Top Element in queue is: " << q.front() << endl; // return no. of elements stored
    cout << "Size of queue is: " << q.size() << endl;         // return no. of elements stored
    cout << "Is queue Empty: " << q.empty() << endl;          // chect if queue is emty or not

    return 0;
}
