// extra space and other characters
#include <iostream>
using namespace std;

void count_string(string);

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    count_string(str);

    return 0;
}

// count the number of vowels, consonants, spaces, words, and characters in a string
void count_string(string str)
{
    int noOfCharacters = 0;
    int vowels = 0;
    int space = 0;
    int consonants = 0;
    int specialChar = 0;
    int words = 0;
    int digits = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        noOfCharacters++;

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            consonants++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] == ' ')
        {
            space++;
            if (str[i + 1] != ' ' && i != 0)
                words++;
        }
        else
            specialChar++;
    }

    cout << "Number of characters in the string are: " << noOfCharacters << endl;
    cout << "Number of vowels in the string are: " << vowels << endl;
    cout << "Number of consonants in the string are: " << consonants << endl;
    cout << "Number of digits in the string are: " << digits << endl;
    cout << "Number of special characters in the string are: " << specialChar << endl;
    cout << "Number of spaces in the string are: " << space << endl;
    cout << "Number of words in the string are: " << words + 1 << endl;
}