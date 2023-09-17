#include <stdio.h>

int main()
{
    int base, exp, pow=1;
    printf("Enter base no: ");
    scanf("%d", &base);
    printf("Enter its power: ");
    scanf("%d", &exp);
    while (exp >= 1)
    {
        pow = pow * base;
        exp--;
    }

printf("%d ",pow);
    return 0;
}