/*
Problem #14
Check if a matrix is a Scalar Matrix.

Concepts:
- 2D Arrays
- Matrix Properties (Scalar Matrix)
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsScalarMatrix
Purpose : Check if the matrix is a Scalar Matrix.
          - Diagonal elements must be identical.
          - Non-diagonal elements must be 0.
-----------------------------------------------------------
*/
bool IsScalarMatrix(int arr[3][3], short Rows, short Cols)
{
    int FirstDiagElement = arr[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // Check diagonal elements equality
            if (i == j && arr[i][j] != FirstDiagElement)
                return false;
            // Check non-diagonal elements
            else if (i != j && arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

/*
-----------------------------------------------------------
Function: PrintMatrix
Purpose : Display the matrix elements.
-----------------------------------------------------------
*/
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d  ", 2, arr[i][j]);
        }
        cout << "\n";
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3] = { {9,0,0}, {0,9,0}, {0,0,9} };
    short Rows = 3, Cols = 3;

    cout << "\nMatrix:\n";
    PrintMatrix(arr, Rows, Cols);
    
    if (IsScalarMatrix(arr, Rows, Cols))
        cout << "\nYes, it is a Scalar Matrix.\n";
    else
        cout << "\nNo, it is not a Scalar Matrix.\n";

    return 0;
}
