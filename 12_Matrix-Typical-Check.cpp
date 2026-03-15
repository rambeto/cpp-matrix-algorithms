/*
Problem #12
Check if two matrices are identical (element-by-element).

Concepts:
- 2D Arrays
- Element-wise Comparison
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsEqual
Purpose : Check if two matrices are identical (element-wise).
-----------------------------------------------------------
*/
bool IsEqual(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
                return false; // Found a mismatch
        }
    }
    return true; // All elements match
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

    int arr1[3][3] = { {1,1,1}, {2,2,2}, {3,3,3} };
    int arr2[3][3] = { {1,1,1}, {2,2,2}, {3,3,3} };
    short Rows = 3, Cols = 3;

    cout << "\nMatrix [1]:\n";
    PrintMatrix(arr1, Rows, Cols);

    cout << "\nMatrix [2]:\n";
    PrintMatrix(arr2, Rows, Cols);

    // Perform Comparison
    if (IsEqual(arr1, arr2, Rows, Cols))
        cout << "\nResult: Matrices are identical (Equal).\n";
    else
        cout << "\nResult: Matrices are NOT identical.\n";

    return 0;
}
