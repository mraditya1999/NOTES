// converts string to long Integer value
// strtol(string,NULL,base)
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20] = "12345";
    int num = strtol(str, NULL, 10);
    cout << "The integer value is: " << num << endl;
    return 0;
}
