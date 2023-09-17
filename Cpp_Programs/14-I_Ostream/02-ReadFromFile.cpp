// For reading from a file, a file must be existed.
#include <fstream>
#include <iostream>
using namespace std;

int main()
{

    // ifstream - class | infile - object
    ifstream ifs;
    ifs.open("student.txt", ios::in);
    if (!ifs.is_open())
        cout << "File not found!" << endl;
    else
    {
        char ch;
        while (ifs.get(ch))
            cout << ch;

        if (ifs.eof())
            cout << "End of file!" << endl;
        else
            cout << "Error!" << endl;
    }
    ifs.close();

    return 0;
}
