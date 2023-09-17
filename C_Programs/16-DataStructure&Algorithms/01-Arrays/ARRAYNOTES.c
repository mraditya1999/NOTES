/*

Pointers And two-dimensional Arrays
To understand more fully the concept of pointers, let us replace
*(multi + row) with X so the expression
*(*(mat + i) + j) becomes *(X + col)
Using pointer arithmetic, we know that the address pointed to by (i.e., value of) X + col + 1 must be greater than the address X + col by an amount equal to sizeof(int).
Since mat is a two-dimensional array, we know that in the expression multi + row as used above,multi + row + 1 must increase in value by an amount equal to that needed to point to the next row,
which in this case would be an amount equal to COLS * sizeof(int).
Thus, in case of a two-dimensional array, in order to evaluate expression (for a row major 2D
array), we must know a total of 4 values:
1. The address of the first element of the array, which is given by the name of the array, i.e., mat
in our case.
2. The size of the type of the elements of the array, i.e., size of integers in our case.
3. The specific index value for the row.
4. The specific index value for the column.

Note A double pointer cannot be used as a 2D array. Therefore, it is wrong to declare: ‘int **mat’ and then use ‘mat’ as a 2D array. These are two very different data types used to access different locations in memory. So running such a code may abort the program with a ‘memory access violation’ error. A 2D array is not equivalent to a double pointer. A ‘pointer to pointer of T’ cannot serve as a ‘2D array of T’.
The 2D array is equivalent to a pointer to row of T, and this is very different from pointer to pointer of T.

Σ Sparse matrix is a matrix that has large number of elements with a zero value.
Σ There are two types of sparse matrices. In the first type, all the elements above the main diagonal have a zero value. This type of sparse matrix is called a lower-triangular matrix. In the second type, all the elements below the main diagonal have a zero value. This type of sparse matrix is called an uppertriangular matrix.
Σ There is another variant of a sparse matrix, in which elements with a non-zero value can appear only on the diagonal or immediately above or below the diagonal. This type of sparse matrix is called a tridiagonal matrix.

*/