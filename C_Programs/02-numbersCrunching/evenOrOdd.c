#include<stdio.h>

int main()
{
    int x;
    for(x = 0; x <= 10; x++)
    {
        if(x&1) // if number is odd
            printf("\t\t\t%d is odd\n",x);
        else if(!(x&1)) // ! is used inside if to reverse the boolean value
            printf("\t\t\t%d is even\n",x);
    }

    return 0;
}