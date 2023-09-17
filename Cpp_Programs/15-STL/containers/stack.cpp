#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.pop();
    cout << "Top Element in stack is: " << s.top() << endl; // return no. of elements stored
    cout << "Size of stack is: " << s.size() << endl;       // return no. of elements stored
    cout << "Is stack Empty: " << s.empty() << endl;        // chect if stack is emty or not

    return 0;
}
