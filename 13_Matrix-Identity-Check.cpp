/*
Problem #13
Check if a matrix is an Identity Matrix.

Concepts:
- 2D Arrays
- Matrix Properties (Identity Matrix)
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsIdentityMatrix
Purpose : Check if the matrix is an identity matrix.
          - Diagonal elements must be 1.
          - Non-diagonal elements must be 0.
-----------------------------------------------------------
*/
bool IsIdentityMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // Check diagonal elements
            if (i == j && arr[i][j] != 1)
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

    // Test Case: Identity Matrix
    int arr[3][3] = { {1,0,0}, {0,1,0}, {0,0,1} };
    short Rows = 3, Cols = 3;

    cout << "\nMatrix:\n";
    PrintMatrix(arr, Rows, Cols);
    
    if (IsIdentityMatrix(arr, Rows, Cols))
        cout << "\nYes, it is an Identity Matrix.\n";
    else
        cout << "\nNo, it is not an Identity Matrix.\n";

    return 0;
}
