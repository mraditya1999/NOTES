#include <stdio.h>
typedef struct
{
    int x;
    int y;
} POINT;
POINT display(POINT p)
{
    printf("The coordinates of the point are: %d %d", p.x, p.y);
    return p;
}
// struct POINT display(POINT);
int main()
{
    POINT p1 = {2, 3};
    display(p1);
    return 0;
}
