#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}