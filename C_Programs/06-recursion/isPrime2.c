#include <stdio.h>

int isPrime(int n)
{
    static int i = 2, flag = 1;
    if (i < n)
    {
        if (n % i != 0)
        {
            flag = 1;
            i++;
            isPrime(n);
        }
        else
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    int n, prime;
    printf("Enter a positive number to check if Prime: ");
    scanf("%d", &n);
    prime = isPrime(n);
    if (prime == 0)
        printf("Composite Number");
    else
        printf("Prime Number");

    return 0;
}