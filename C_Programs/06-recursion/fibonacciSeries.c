#include <stdio.h>
void fib(int n)
{

        static int first = 0, second = 1, sum;
    if (n > 2)
    {
        sum = first + second;
        printf("%d ", sum);
        first = second;
        second = sum;
        fib(n - 1);
    }
    else
    printf("\n\n");
}

int main()
{
    int a = 0, b = 1, n;
    printf("Enter the length of Fibonacci series: ");
    scanf("%d", &n);
    printf("\nfirst %d terms of Fibonacci series are:\n",n);
    printf("%d %d ", a, b);
    fib(n);
    return 0;
}