#include <stdio.h>

int main()
{
    int n, x, max;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("\nElement 1: ");
    scanf("%d", &max);
    for (int i = 2; i <= n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &x);
        if (x > max)
            max = x;
    }
    printf("largest element among %d numbers is %d ", n, max);
    return 0;
}