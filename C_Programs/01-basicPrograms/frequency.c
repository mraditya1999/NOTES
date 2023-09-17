
/*
Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9 .

Sample Input 0
a11472o5t6

Sample Output 0
0 2 1 0 1 1 1 1 0 0
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int *nums = (int *)malloc(10 * sizeof(int));
    char c;

    for (int i = 0; i < 10; i++)
        *(nums + i) = 0;

    while (scanf("%c", &c) == 1)
        if (c >= '0' && c <= '9')
            printf("%c", (*(nums + (c - '0')))++);

    for (int i = 0; i < 10; i++)
        printf("%d ", *(nums + i));

    return EXIT_SUCCESS;
}