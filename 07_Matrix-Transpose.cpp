/*
Problem #07
Create a 3x3 matrix with sequential numbers and compute its transpose.

Concepts:
- 2D Arrays
- Matrix Traversal
- Transpose of a Matrix
*/

#include <iostream>
#include <iomanip>
using namespace std;

//-----------------------------------------------------------
// Function: FillMatrixWithSequentialNumbers
// Purpose : Fill a 2D matrix with sequential numbers starting from 1
// Inputs  : arr - 2D matrix, Rows - number of rows, Cols - number of columns
//-----------------------------------------------------------
void FillMatrixWithSequentialNumbers(int arr[3][3], short Rows, short Cols)
{
    int Counter = 1;
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arr[i][j] = Counter++;
}

//-----------------------------------------------------------
// Function: PrintMatrix
// Purpose : Display the matrix in formatted style
// Inputs  : arr - 2D matrix, Rows - number of rows, Cols - number of columns
//-----------------------------------------------------------
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
            cout << setw(3) << arr[i][j] << " ";
        cout << "\n";
    }
}

//-----------------------------------------------------------
// Function: TransposeMatrix
// Purpose : Compute the transpose of a 2D matrix
// Inputs  : arr - original matrix, arrT - transposed matrix, Rows, Cols
//-----------------------------------------------------------
void TransposeMatrix(int arr[3][3], int arrT[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arrT[i][j] = arr[j][i]; // Swap row and column
}

//-----------------------------------------------------------
// Main Function
//-----------------------------------------------------------
int main()
{
    int matrix[3][3], matrixT[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithSequentialNumbers(matrix, Rows, Cols);
    cout << "\nOriginal 3x3 Matrix:\n";
    PrintMatrix(matrix, Rows, Cols);

    TransposeMatrix(matrix, matrixT, Rows, Cols);
    cout << "\nTranspose of the Matrix:\n";
    PrintMatrix(matrixT, Rows, Cols);

    system("pause>0");
}
