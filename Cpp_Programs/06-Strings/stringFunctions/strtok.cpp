// tokenize a string
// strtok(string,NULL,base)
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20] = "x=10;y=20;z=30;";
    // cout << "Tokenized string is: " << strtok(str, "=;") << endl;

    char *token = strtok(str, ";");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";");
    }

    return 0;
}
