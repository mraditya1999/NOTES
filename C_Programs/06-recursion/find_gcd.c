// find Greatest Common Divisior of two numbers
#include <stdio.h>

int find_gcd(int a, int b)
{
    if (a > b)
        find_gcd(a - b, b);
    else if (b > a)
        find_gcd(a, b - a);
    else
        return a;
}
int main()
{
    int first, second, gcd;
    printf("Enter First Number: ");
    scanf("%d", &first);
    printf("Enter Second Number: ");
    scanf("%d", &second);

    gcd = find_gcd(first, second);
    printf("%d", gcd);

    return 0;
}