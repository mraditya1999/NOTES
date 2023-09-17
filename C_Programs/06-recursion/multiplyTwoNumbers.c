#include <stdio.h>

int multiply(int m, int n)
{
    int product = 0;
    if (n == 0)
        return 0;

        /*
           Recursion: adding 1, n times and
           then at the end adding m to it
       */
        product = multiply(m, n - 1) + m;
    return product;
}
int main()
{
    int a, b, product;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    product = multiply(a, b);

    printf("The product of two no. is: %d", product);
    return 0;
}