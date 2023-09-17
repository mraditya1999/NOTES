#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    int *ptra = &a;
    int *ptrb = &b;

    printf("Before swapping: a = %d b = %d\n", *ptra, *ptrb);
    printf("Before swapping: a = %d b = %d\n\n", a, b);

    temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;

    printf("After swapping: a = %d b = %d\n", *ptra, *ptrb);
    printf("After swapping: a = %d b = %d", a, b);

    return 0;
}