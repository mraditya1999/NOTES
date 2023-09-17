#include <stdio.h>

void fib(int i, int a, int b, int n)
{
    if (i > n)
        return;
    
    int sum = a + b;
    
    fib(i + 1, b, sum, n);
    
    printf("%d\n", sum);
}

int main()
{
    int n;
    int a = 0, b = 1;
    scanf("%d",&n);
    fib(3, a, b, n);
    
    if (n >= 2)
        printf("%d", b);
    if (n >= 1)
        printf("\n%d ", a);
        
    return 0;
}
