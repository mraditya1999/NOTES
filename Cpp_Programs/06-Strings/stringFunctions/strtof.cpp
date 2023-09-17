// converts string to float value
// strtof(string,NULL)

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20] = "123.45";
    float num = strtof(str, NULL);
    cout << "The float value is: " << num << endl;

    return 0;
}
