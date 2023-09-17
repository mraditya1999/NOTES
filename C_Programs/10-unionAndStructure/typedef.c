#include <stdio.h>

typedef struct B
{
    int x, y;
} A;

/*
typedef struct
{
    int x,y;
}A;

*/

int main()
{
    A a;
    a.x = 5;
    struct B b;
    printf("%d %d", a.x, a.y);
    return 0;
}