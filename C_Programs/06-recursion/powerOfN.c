#include <stdio.h>

int power(int b, int e)
{
    int val;
    if (e == 0)
        return 1;
    else
        return b * power(b, e - 1);
}

int main()
{
    int base, exponent;
    printf("Enter a base: ");
    scanf("%d", &base);
    printf("Enter its exponent: ");
    scanf("%d", &exponent);
    printf("%d^%d = %d", base, exponent, power(base, exponent));
    return 0;
}