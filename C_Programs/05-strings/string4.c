// WAP that reads a string and then scans each character to count the total number of characters in lower case and upper case using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int lower = 0, upper = 0;
    printf("Enter a string: ");
    gets(str);
    char *sptr = str;

    while (*sptr != '\0')
    {
        if (*sptr >= 'A' && *sptr <= 'Z')
            upper++;
        else if (*sptr >= 'a' && *sptr <= 'z')
            lower++;
        sptr++;
    }
    printf("\n Total number of upper case characters = %d", upper);
    printf("\n Total number of lower case characters = %d", lower);
    return 0;
}