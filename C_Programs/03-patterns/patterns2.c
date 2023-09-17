/*
Pattern Questions

Print these patterns using loops:

1.  *****
    *****
    *****
    *****
    *****


2.  *
    **
    ***
    ****
    *****


3.  *****
    ****
    ***
    **
    *


4.  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5


5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *


6.       *
        **
       ***
      ****
     *****


7.   *****
      ****
       ***
        **
         *


8.      *
       ***
      *****
     *******
    *********


9.  *********
     *******
      *****
       ***
        *


10.      *
        * *
       * * *
      * * * *
     * * * * *


11.  * * * * *
      * * * *
       * * *
        * *
         *


12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *


13.      *
        * *
       *   *
      *     *
     *********


14.  *********
      *     *
       *   *
        * *
         *


15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *


16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1


17.      1
        212
       32123
      4321234
       32123
        212
         1


18.   **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********


19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *


20.    ****
       *  *
       *  *
       *  *
       ****

21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15

22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1

23.        *      *
         *   *  *   *
       *      *      *

24.    *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *

25.       *****
         *   *
        *   *
       *   *
      *****

26.   1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6

27.   1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11

28.      *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *

29.
       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *

30.         1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5


31.      4 4 4 4 4 4 4
         4 3 3 3 3 3 4
         4 3 2 2 2 3 4
         4 3 2 1 2 3 4
         4 3 2 2 2 3 4
         4 3 3 3 3 3 4
         4 4 4 4 4 4 4

32.    E
       D E
       C D E
       B C D E
       A B C D E

33.    a
       B c
       D e F
       g H i J
       k L m N o

34.    E D C B A
       D C B A
       C B A
       B A
       A

35.    1      1
       12    21
       123  321
       12344321
```
*/

#include <stdio.h>

void pattern1(int r)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern2(int r)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(int r)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = i; j <= r; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern4(int r)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void pattern5(int r)
{
    int i, j, k;
    for (i = 1; i <= 2 * r - 1; i++)
    {
        if (i <= r)
            for (j = 1; j <= i; j++)
                printf("* ");
        else
            for (k = i; k <= 2 * r - 1; k++)
                printf("* ");

        printf("\n");
    }
}

void pattern6(int r)
{
    int i, space, j;
    for (i = 1; i <= r; i++)
    {
        for (space = i; space <= r - 1; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern7(int r)
{
    int i, space, j;
    for (i = 1; i <= r; i++)
    {
        for (space = 1; space <= i; space++)
        {
            printf("  ");
        }
        for (j = i; j <= r; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern8(int r)
{
    int i, space, j;
    for (i = 1; i <= r; i++)
    {
        for (space = i; space <= r - 1; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

void pattern9(int r)
{
    int i, space, j;
    for (i = 1; i <= r; i++)
    {
        space = 1;
        for (j = 1; j <= 2 * r - 1; j++)
        {
            if (space <= i - 1)
            {
                printf(" ");
                space++;
            }
            else if (j <= 2 * r - i)
                printf("*");
        }
        printf("\n");
    }
}

void pattern10(int r)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            if (j <= r - i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void pattern11(int r)
{
    int i, space, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}

void pattern12(int r)
{
    int i, j, k;
    for (i = 1; i <= 2 * r; i++)
    {
        for (j = 1; j <= r; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("* ");
        }
        // for (k = 1; k <= r; k++)
        // {
        //     if (k < i)
        //         printf("* ");
        //     else
        //         printf("  ");
        // }

        printf("\n");
    }
}

int main()
{
    int row;
    printf("row: ");
    scanf("%d", &row);
    pattern12(row);

    return 0;
}