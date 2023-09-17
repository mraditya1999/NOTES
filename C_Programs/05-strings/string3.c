// Write a program to reverse a given string.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[100], temp;
    int i = 0, j = 0;
    printf("\n Enter the string : ");
    gets(str);
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("\n The reversed string is : ");
    puts(str);
}