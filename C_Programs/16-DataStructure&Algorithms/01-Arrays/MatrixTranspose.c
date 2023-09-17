#include <stdio.h>

int main()
{
    int a[3][3],result[3][3];
    printf("Enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Calculate the result
            result[i][j] = a[j][i];
        }
    }

    //Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d \t", result[i][j]);
        printf("\n");
    }

    return 0;
}