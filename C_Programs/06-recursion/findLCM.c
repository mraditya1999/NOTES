#include <stdio.h>

int find_lcm(int a, int b)
{
    static int i = 1;

    if (i % a == 0 && i % b == 0)
        return i;
    else
        i++;
    find_lcm(a, b);
    return i;
}

int main()
{
    int first, second, lcm;
    printf("Enter First Number: ");
    scanf("%d", &first);
    printf("\nEnter Second Number: ");
    scanf("%d", &second);

    lcm = find_lcm(first, second);
    printf("\nLCM of %d and %d is: %d", first, second, lcm);
    return 0;
}