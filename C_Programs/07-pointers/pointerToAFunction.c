#include <stdio.h>
 
 int sum(int a,int b)
 {
     printf("a = %d b = %d\n",a,b);
     printf("%d + %d = %d\n\n",a,b,a+b);
 }
int main()
{
    int (*fptr)(int ,int);
    fptr = sum;

    sum(5,7);
    sum(8,7);
    
    return 0;
}