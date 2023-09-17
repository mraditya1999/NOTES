#include <stdio.h>

int sumOfDifit(int n)
{
    static int rem, sum = 0;
    if (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        sumOfDifit(n / 10);
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("sum of digit of n is: %d",sumOfDifit(n));
    return 0;
}