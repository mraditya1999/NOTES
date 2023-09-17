/*
5. Write a program to enter n number of digits. Form a number using these digits.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
int number=0, digit[10], numofdigits,i;
clrscr();
printf("\n Enter the number of digits : ");
scanf("%d", &numofdigits);
for(i=0;i<numofdigits;i++)
{
printf("\n Enter the digit at position %d", i+1);
scanf("%d", &digit[i]);
}
i=0;
while(i<numofdigits)
{
number = number + digit[i] * pow(10,i);
i++;
}
printf("\n The number is : %d", number);
return 0;
}


15. Write a program to display an array of given numbers.
#include <stdio.h>
int main()
{
int arr[]={1,2,3,4,5,6,7,8,9};
int *ptr1, *ptr2;
ptr1 = arr;
ptr2 = &arr[8];
while(ptr1<=ptr2)
{
printf("%d", *ptr1);
ptr1++;
}
return 0;
}
Output
1 2 3 4 5 6 7 8 9

Write a program to generate Pascal’s triangle.
#include <stdio.h>
#include <conio.h>
int main()
{
int arr[7][7]={0};
int row=2, col, i, j;
arr[0][0] = arr[1][0] = arr[1][1] = 1;
while(row <= 7)
{
arr[row][0] = 1;
for(col = 1; col <= row; col++)
arr[row][col] = arr[row–1][col–1] + arr[row–1][col];
row++;
}
for(i=0; i<7; i++)
{
printf("\n");
for(j=0; j<=i; j++)
Arrays 97
printf("\t %d", arr[i][j]);
}
getch();
return 0;
}
Output
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

In a small company there are five salesmen. Each salesman is supposed to sell three
products. Write a program using a 2D array to print (i) the total sales by each salesman
and (ii) total sales of each item.
#include <stdio.h>
#include <conio.h>
int main()
{
int sales[5][3], i, j, total_sales=0;
//INPUT DATA
printf("\n ENTER THE DATA");
printf("\n *****************");
for(i=0; i<5; i++)
{
printf("\n Enter the sales of 3 items sold by salesman %d: ", i+1) ;
for(j=0; j<3; j++)
scanf("%d", &sales[i][j]);
}
// PRINT TOTAL SALES BY EACH SALESMAN
for(i=0; i<5; i++)
{
total_sales = 0;
for(j=0; j<3; j++)
total_sales += sales[i][j];
printf("\n Total Sales By Salesman %d = %d", i+1, total_sales);
}
// TOTAL SALES OF EACH ITEM
for(i=0; i<3; i++) // for each item
{
total_sales=0;
for(j=0; j<5; j++) // for each salesman
total_sales += sales[j][i];
printf("\n Total sales of item %d = %d", i+1, total_sales);
}
getch();
return 0;
}
Output
ENTER THE DATA
*****************
Enter the sales of 3 items sold by salesman 1: 23 23 45
Enter the sales of 3 items sold by salesman 2: 34 45 63
Enter the sales of 3 items sold by salesman 3: 36 33 43
Enter the sales of 3 items sold by salesman 4: 33 52 35
98 Data Structures Using C
Enter the sales of 3 items sold by salesman 5: 32 45 64
Total Sales By Salesman 1 = 91
Total Sales By Salesman 2 = 142
Total Sales By Salesman 3 = 112
Total Sales By Salesman 4 = 120
Total Sales By Salesman 5 = 141
Total sales of item 1 = 158
Total sales of item 2 = 198
Total sales of item 3 = 250

Write a program to fill a square matrix with value zero on the diagonals, 1 on the upper right triangle, and –1 on the lower left triangle.
#include <stdio.h>
#include <conio.h>
void read_matrix(int mat[5][5], int);
void display_matrix(int mat[5][5], int);
int main()
{
int row;
int mat1[5][5];
clrscr();
printf("\n Enter the number of rows and columns of the matrix:");
scanf("%d", &row);
read_matrix(mat1, row);
display_matrix(mat1, row);
getch();
return 0;
}
void read_matrix(int mat[5][5], int r)
{
int i, j;
for(i=0; i<r; i++)
{
for(j=0; j<r; j++)
{
if(i==j)
mat[i][j] = 0;
else if(i>j)
mat[i][j] = –1;
else
mat[i][j] = 1;
}
}
}
void display_matrix(int mat[5][5], int r)
{
int i, j;
Arrays 105
for(i=0; i<r; i++)
{
printf("\n");
for(j=0; j<r; j++)
printf("\t %d", mat[i][j]);
}
}
Output
Enter the number of rows and columns of the matrix: 2
0 1
–1 0

Programming Exercises
7. Write a program that computes the sum of the elements that are stored on the main diagonal of a matrix using pointers.
8. Write a program to add two 3 ¥ 3 matrix using pointers.
9. Write a program that computes the product of the elements that are stored on the diagonal above the main diagonal.
11. Write a program to input the elements of a twodimensional array. Then from this array, make two arrays—one that stores all odd elements of the two-dimensional array and the other that stores all even elements of the array.
13. Write a program using pointers to interchange the second biggest and the second smallest number in the array.
14. Write a menu driven program to read and display a p ¥ q ¥ r matrix. Also, find the sum, transpose, and product of the two p ¥ q ¥ r matrices.
15. Write a program that reads a matrix and displays the sum of its diagonal elements.
16. Write a program that reads a matrix and displays the sum of the elements above the main diagonal. (Hint: Calculate the sum of elements Aij where i<j)
17. Write a program that reads a matrix and displays the sum of the elements below the main diagonal. (Hint: Calculate the sum of elements Aij where i>j)
18. Write a program that reads a square matrix of size n ¥ n. Write a function int isUpperTriangular (int a[][], int n) that returns 1 if the matrix is upper triangular. (Hint: Array A is upper triangular if Aij = 0 and i>j)
19. Write a program that reads a square matrix of size n ¥ n. Write a function int isLowerTriangular (int a[][], int n) that returns 1 if the matrix is lower triangular. (Hint: Array A is lower triangular if Aij = 0 and i<j)
20. Write a program that reads a square matrix of size n ¥ n. Write a function int isSymmetric (int a[][], int n) that returns 1 if the matrix is symmetric. (Hint: Array A is symmetric if Aij = Aji for all values of i and j)
21. Write a program to calculate XA + YB where A and B are matrices and X = 2 and Y = 3.
22. Write a program to illustrate the use of a pointer that points to a 2D array.
23. Write a program to enter a number and break it into n number of digits.
24. Write a program to delete all the duplicate entries from an array of n integers.

*/