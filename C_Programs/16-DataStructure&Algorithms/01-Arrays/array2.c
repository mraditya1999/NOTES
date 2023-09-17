// Write a program that reads an array of 100 integers. Display all the pairs of elements whose sum is 50.
#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 100; i++)
    {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i != j)
            {
                if (arr[i] + arr[j] == 50)
                {
                    printf("%d %d\n", arr[i], arr[j]);
                    arr[i] = -1;
                    arr[j] = -1;
                }
            }
        }
    }

    return 0;
}