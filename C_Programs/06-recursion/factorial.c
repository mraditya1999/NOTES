#include <stdio.h>

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int n, fact;
    printf("Enter a value: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("%d", fact);
    return 0;
}