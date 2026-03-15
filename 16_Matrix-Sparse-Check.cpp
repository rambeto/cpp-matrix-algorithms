/*
Problem #16
Check if a matrix is a Sparse Matrix.
(A Sparse Matrix is one where the number of zeros is more than half the total elements)

Concepts:
- 2D Arrays
- Matrix Properties
- Conditional Logic
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsSparse
Purpose : Check if the number of zeros > half the total elements.
-----------------------------------------------------------
*/
bool IsSparse(int arr[3][3], short Rows, short Cols)
{
    int NumberOfZeros = 0;
    int TotalElements = Rows * Cols;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == 0)
                NumberOfZeros++;
        }
    }
    
    return (NumberOfZeros > TotalElements / 2);
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
    
    if (IsSparse(arr, Rows, Cols))
        cout << "\nYes, it is a Sparse Matrix.\n";
    else
        cout << "\nNo, it is not a Sparse Matrix.\n";

    return 0;
}
