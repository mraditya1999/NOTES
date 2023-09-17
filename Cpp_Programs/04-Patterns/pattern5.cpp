#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = 2 * n - j;
            int bottom = 2 * n - i;
            cout << (n - min(min(top, bottom), min(left, right))) + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
