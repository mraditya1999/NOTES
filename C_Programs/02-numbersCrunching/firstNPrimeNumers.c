#include <stdio.h>

int main()
{
    int n, flag = 1;
    printf("Enter a number to find prime no till that number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }

        if (flag == 1)
            printf("%d ", i);
    }
    return 0;
}