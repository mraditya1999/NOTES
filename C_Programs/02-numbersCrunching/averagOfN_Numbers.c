#include <stdio.h>

int main()
{
    int n;
    float x, avg, sum = 0;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum = sum + x;
    }

    printf("Average of %d numbers is: %.2f ", n, (sum / n));

    return 0;
}