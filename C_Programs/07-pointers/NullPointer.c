#include <stdio.h>

int main()
{
    int a = 30;
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("The address of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is NULL pointer and cannnot be dereferenced\n");
        printf("%x", ptr); // it print its default value 0
    }
    return 0;
}