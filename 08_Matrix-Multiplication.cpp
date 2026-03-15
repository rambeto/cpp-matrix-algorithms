/*
Problem #08
Multiply two 3x3 matrices element by element and print the result.

Concepts:
- 2D Arrays
- Matrix Traversal
- Element-wise Multiplication
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//-----------------------------------------------------------
// Function: RandomNumber
// Purpose : Generate a random number between From and To
//-----------------------------------------------------------
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

//-----------------------------------------------------------
// Function: FillMatrixWithRandomNumbers
// Purpose : Fill a 2D matrix with random numbers
//-----------------------------------------------------------
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arr[i][j] = RandomNumber(1, 10);
}

//-----------------------------------------------------------
// Function: PrintMatrix
// Purpose : Display the matrix in formatted style
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
// Function: MultiplyTwoMatrices
// Purpose : Multiply two matrices element by element and store in result matrix
//-----------------------------------------------------------
void MultiplyTwoMatrices(int arr1[3][3], int arr2[3][3], int arrResult[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arrResult[i][j] = arr1[i][j] * arr2[i][j];
}

//-----------------------------------------------------------
// Main Function
//-----------------------------------------------------------
int main()
{
    srand((unsigned)time(NULL)); // Seed random generator

    int matrix1[3][3], matrix2[3][3], result[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithRandomNumbers(matrix1, Rows, Cols);
    FillMatrixWithRandomNumbers(matrix2, Rows, Cols);

    MultiplyTwoMatrices(matrix1, matrix2, result, Rows, Cols);

    cout << "\nMatrix [1]:\n";
    PrintMatrix(matrix1, Rows, Cols);

    cout << "\nMatrix [2]:\n";
    PrintMatrix(matrix2, Rows, Cols);

    cout << "\nResult of multiplying Matrix [1] * Matrix [2]:\n";
    PrintMatrix(result, Rows, Cols);

    system("pause>0");
}
