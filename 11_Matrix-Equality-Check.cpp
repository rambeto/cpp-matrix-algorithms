/*
Problem #11
Compare the sum of two matrices.

Concepts:
- 2D Arrays
- Modular Programming
- Matrix Traversal
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: RandomNumber
Purpose : Generate a random number within a given range.
-----------------------------------------------------------
*/
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

/*
-----------------------------------------------------------
Function: FillMatrixWithRandomNumbers
Purpose : Populate the matrix with random values (1-10).
-----------------------------------------------------------
*/
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 10);
        }
    }
}

/*
-----------------------------------------------------------
Function: PrintMatrix
Purpose : Print the matrix in a formatted layout.
-----------------------------------------------------------
*/
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

/*
-----------------------------------------------------------
Function: SumOfMatrix
Purpose : Calculate the sum of all elements in the matrix.
-----------------------------------------------------------
*/
int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Sum += Matrix1[i][j];
        }
    }
    return Sum;
}

/*
-----------------------------------------------------------
Function: AreEqualMatrices
Purpose : Compare sums of two matrices.
-----------------------------------------------------------
*/
bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
    return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
}

int main()
{
    // Seed the random number generator
    srand((unsigned)time(NULL));

    int Matrix1[3][3], Matrix2[3][3];

    // Initialize and print matrices
    FillMatrixWithRandomNumbers(Matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    FillMatrixWithRandomNumbers(Matrix2, 3, 3);
    cout << "\nMatrix2:\n";
    PrintMatrix(Matrix2, 3, 3);

    // Comparison result
    if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
        cout << "\nYES: Both matrices are equal (in sum).\n";
    else
        cout << "\nNo: Matrices are NOT equal (in sum).\n";

    system("pause>0");
    return 0;
}
