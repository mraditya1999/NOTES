#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> v2 = {10, 20, 30};
    v2.push_front(40);
    v2.pop_front();

    // Method 1
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    // Method 2
    forward_list<int>::iterator it;
    for (it = v2.begin(); it != v2.end(); it++)
        cout << *it << " ";

    return 0;
}
