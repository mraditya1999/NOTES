#include <iostream>
using namespace std;

string changeInLowerCase(string);
string changeInUpperCase(string);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    str = changeInLowerCase(str);
    cout << "Lowercase of the string is: " << str << endl;

    str = changeInUpperCase(str);
    cout << "Uppercase of the string is: " << str << endl;

    return 0;
}

string changeInLowerCase(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        // str[i] = tolower(str[i]);
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    return str;
}

string changeInUpperCase(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        // str[i] = toupper(str[i]);
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    return str;
}
