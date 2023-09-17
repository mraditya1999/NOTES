#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {

        // space
        for (int space = row; space < n; space++)
            cout << "  ";

        // pattern1
        int count = 1;
        for (int col = 1; col <= row; col++)
            cout << count++ << " ";

        // pattern2
        for (int col = 1; col < row; col++)
            cout << row - col << " ";

        cout << endl;
    }
}
