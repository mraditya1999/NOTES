#include <stdio.h>
 
int main()
{
    int n,x,sum;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        sum = sum  + x;
    }
    printf("sum is: %d",sum);
    
    return 0;
}