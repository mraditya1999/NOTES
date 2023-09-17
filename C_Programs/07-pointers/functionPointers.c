#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    printf("The sum  is: %d\n", sum(4, 5));

    int (*fptr)(int, int); // declaring a function pointer

    // assigning address of a function to a function pointer
    fptr = sum; // fptr = sum; is same as fptr = &sum;

    int d = (*fptr)(4, 6); // derefrencing a function pointer

    printf("The value of d is: %d\n", d);

    return 0;
}