// A Sparse Matrix is a matrix(two-dimensional array) in which number of 0's is greater than the number of non-zero elements.
// Write a program to count the total number of non-zero elements in a two-dimensional array & checl matrixa is sparse or not.

#include <stdio.h>

void isSparseMatrix(int row, int column)
{
    int arr[row][column], zero = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("row %d column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 0)
                zero++;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    if (zero > (row * column) / 2)
        printf("\n\nThe entered matrix is a sparse matrix\n");
    else
        printf("\n\nThe entered matrix is not a sparse matrix\n");

        printf("No. of zeroes in matrix: %d",zero);
}

int main()
{
    int row, column;
    printf("Enter no of rows: ");
    scanf("%d", &row);
    printf("Enter no of columns: ");
    scanf("%d", &column);

    isSparseMatrix(row, column);
    return 0;
}