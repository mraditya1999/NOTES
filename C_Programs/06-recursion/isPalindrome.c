#include <stdio.h>
int isPalindrome(int x)
{
    static int sum;
    int rem;
    if (x != 0)
    {
        rem = x % 10;
        sum = sum * 10 + rem;
        isPalindrome(x / 10);
    }
    return sum;
}

int main()
{
    int n,pal;
    printf("Enter a number: ");
    scanf("%d", &n);
    pal = isPalindrome(n);
    if (pal == n)
        printf("%d is Palindrome",n);
    else
        printf("%d is not Palindrome",n);

    return 0;
}