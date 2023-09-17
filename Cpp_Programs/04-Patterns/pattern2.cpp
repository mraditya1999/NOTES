#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        // pattern1
        for (int col = 1; col <= n - row + 1; col++)
            cout << col << " ";

        // star 1
        for (int star1 = 1; star1 < row; star1++)
            cout << "* ";

        // star 2
        for (int star2 = 1; star2 < row; star2++)
            cout << "* ";

        // pattern2
        for (int col = row; col <= n; col++)
            cout << n - col + 1 << " ";

        cout << endl;
    }
}
