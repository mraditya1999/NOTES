// 5 operations on pointers
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p = arr;
    int *q = &arr[2];
    int ans;

    cout << "Value of p: " << *p++ << endl;
    cout << "Value of p: " << *p-- << endl;
    p = p + 2;
    cout << "Value of p: " << *p << endl;
    p = p - 2;
    cout << "Value of p: " << *p
         << endl;

    ans = q - p;
    cout << "Value of ans: " << ans << endl;

    return 0;
}
