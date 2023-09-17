#include <stdio.h>
#include <conio.h>

void towerOfHanoi(int noOfDisks, char src[], char helper[], char dest[]);

void main()
{
    int noOfDisks = 3;
    towerOfHanoi(noOfDisks, "S", "H", "D");
}

void towerOfHanoi(int noOfDisks, char src[], char helper[], char dest[])
{
    if (noOfDisks == 1)
    {
        printf("transfer disk %d from %s to %s\n", noOfDisks, src, dest);
        return;
    }

    towerOfHanoi(noOfDisks - 1, src, dest, helper);
    printf("transfer disk %d from %s to %s\n", noOfDisks, src, dest);
    towerOfHanoi(noOfDisks - 1, helper, src, dest);
}