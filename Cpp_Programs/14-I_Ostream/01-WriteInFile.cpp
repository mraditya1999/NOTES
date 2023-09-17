// Write in file using ofstream class
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // ofstream - class | outfile - object
    ofstream ofs("student.txt", ios::app);
    ofs << "Harshit Tipathi" << endl;
    ofs << "24" << endl;
    ofs << "Computer Science" << endl;
    ofs.close();

    return 0;
}
