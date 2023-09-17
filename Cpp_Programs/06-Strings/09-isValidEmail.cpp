#include <iostream>
using namespace std;

bool isValidEmail(string);
string getUsername(string);

int main()
{
    string email;
    cout << "Enter your email: ";
    getline(cin, email);

    string username = "";

    if (isValidEmail(email))
    {
        cout << "username is: " << getUsername(email) << endl;
        return 0;
    }
    else
    {
        cout << "invalid email" << endl;
    }

    return 0;
}

bool isValidEmail(string email)
{
    int atTheRate = 0;
    int dot = 0;
    int underscore = 0;
    int space = 0;
    int specialChar = 0;

    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == '@')
            atTheRate++;
        else if (email[i] == '.')
            dot++;
        else if (email[i] == '_')
            underscore++;
        else if (email[i] == ' ')
            space++;
        else if (email[i] >= 33 && email[i] <= 47 || email[i] >= 58 && email[i] <= 64 || email[i] >= 91 && email[i] <= 96 || email[i] >= 123 && email[i] <= 126)
            specialChar++;
    }

    if (atTheRate == 1 && dot >= 1 && underscore <= 1 && space == 0 && specialChar == 0)
        return true;
    else
        return false;
}

string getUsername(string email)
{
    string username = email.substr(0, email.find("@"));
    return username;
}
