// Program to take pointer array and print every element  of array

#include <stdio.h>
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {0, 2, 4, 6, 8};
    int arr3[] = {1, 3, 5, 7, 9};
    int *parr[3] = {arr1, arr2, arr3};
    int i;
    int *temp;
    temp = parr[1];

    for (int i = 0; i < 3; i++)
    {
        temp = parr[i];
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", *(temp + i));
        }
        printf("\n");
    }

    return 0;
}

// #include<stdio.h>
// void main ()
// {
// int a[3] = {10,20,30};
// int *p[3],i;
// for (i=0; i<3; i++)
// p[i] = &a[i]; //initializing base address of array
// printf ("elements of the array are: ");
// for (i=0; i<3; i++)
// printf ("%d \t", *p[i]); //printing array of pointers
// }

// #include<stdio.h>
// void main ()
// {
// int a[3] = {10,20,30};
// int *p,i;
// for (i=0; i<3; i++)
// p = a; //initializing base address of array
// printf ("elements of the array are: ");
// for (i=0; i<3; i++)
// printf ("%d \t", p[i]); //printing array of pointers
// }