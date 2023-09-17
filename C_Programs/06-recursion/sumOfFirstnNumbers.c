#include <stdio.h>

void sumOfN_Numbers(int n)
{
    static int sum = 0;
    if (n > 0)
    {
        sum = sum + n;
        sumOfN_Numbers(n - 1);
        return;
    }
    printf("%d ", sum);
}

int main()
{
    int n;
    printf("enter no of Elements: ");
    scanf("%d", &n);
    sumOfN_Numbers(n);
    return 0;
}