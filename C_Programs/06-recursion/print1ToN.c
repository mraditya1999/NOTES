#include <stdio.h>
 
 void print(int n)
 {
     if (n == 0)
     {
         return;    
     }
     else
     print(n-1);
     printf("%d ",n);
 }
int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    print(n);
    return 0;
}