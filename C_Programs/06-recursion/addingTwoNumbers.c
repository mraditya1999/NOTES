#include <stdio.h>

int add(int m, int n)
{
    int sum = 0;
    if (n == 0)
        return m;

        /*
           Recursion: adding 1, n times and
           then at the end adding m to it
       */
        sum = add(m, n - 1) + 1;
        return sum;
}
int main()
{
    int a, b, sum = 0;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    sum = add(a, b);

    printf("The sum of two no. is: %d", sum);
    return 0;
}