// Addition of two matrices
#include <iostream>
using namespace std;

void enterData(int[][10], int[][10], int, int, int, int);
void multiplyMatrices(int[][10], int[][10], int[][10], int, int, int, int);
void addMatrices(int[][10], int[][10], int[][10], int, int, int, int);
void display(int[][10], int, int);

int main()
{

    int firstMatrix[10][10], secondMatrix[10][10], addition[10][10], multiplication[10][10];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    do
    {
        cout << "Enter rows and column for first matrix: ";
        cin >> rowFirst >> columnFirst;
        cout << "Enter rows and column for second matrix: ";
        cin >> rowSecond >> columnSecond;

        if (columnFirst != rowSecond)
            cout << "Error! column of first matrix not equal to row of second." << endl;

    } while (columnFirst != rowSecond);

    // Function to take matrices data
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to add two matrices.
    addMatrices(firstMatrix, secondMatrix, addition, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to display resultant matrix after addition.
    cout << endl
         << "Sum of two matrix is: " << endl;
    display(addition, rowFirst, columnSecond);

    // Function to multiply two matrices.
    cout << endl
         << "Multiplication of two matrix is: " << endl;
    multiplyMatrices(firstMatrix, secondMatrix, multiplication, rowFirst, columnFirst, rowSecond, columnSecond);

    // Function to display resultant matrix after multiplication.
    display(multiplication, rowFirst, columnSecond);

    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    cout << endl
         << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rowFirst; ++i)
    {
        for (int j = 0; j < columnFirst; ++j)
        {
            cout << "Enter elements a" << i + 1 << j + 1 << ": ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << endl
         << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rowSecond; ++i)
    {
        for (int j = 0; j < columnSecond; ++j)
        {
            cout << "Enter elements b" << i + 1 << j + 1 << ": ";
            cin >> secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multiplication[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    // Initializing elements of matrix multiplication to 0.
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < columnSecond; ++j)
            multiplication[i][j] = 0;

    // multiplying matrix firstMatrix and secondMatrix and storing in array multiplication.
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < columnSecond; ++j)
            for (int k = 0; k < columnFirst; ++k)
                multiplication[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
}

void addMatrices(int firstMatrix[][10], int secondMatrix[][10], int addition[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
    // adding matrix firstMatrix and secondMatrix and storing in array addition.
    for (int i = 0; i < rowFirst; ++i)
        for (int j = 0; j < columnSecond; ++j)
            addition[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
}

void display(int matrix[][10], int rowFirst, int columnSecond)
{
    int i, j;

    for (i = 0; i < rowFirst; ++i)
    {
        for (j = 0; j < columnSecond; ++j)
        {
            cout << matrix[i][j] << " ";
            if (j == columnSecond - 1)
                cout << endl;
        }
    }
}