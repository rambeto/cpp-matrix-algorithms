/*
Problem #17
Check if a specific number exists in a matrix.

Concepts:
- 2D Arrays
- Linear Search in Matrices
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsExistsNumberInMatrix
Purpose : Search for a specific number in the matrix.
-----------------------------------------------------------
*/
bool IsExistsNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                return true; // Found the number
        }
    }
    return false; // Number not found
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

    int arr[3][3];
    short Rows = 3, Cols = 3;
    int NumberToSearch = 4;

    FillMatrixWithRandomNumbers(arr, Rows, Cols);

    cout << "\nGenerated Matrix:\n";
    PrintMatrix(arr, Rows, Cols);
    
    if (IsExistsNumberInMatrix(arr, NumberToSearch, Rows, Cols))
        cout << "\nYes, the number " << NumberToSearch << " exists in the matrix.\n";
    else
        cout << "\nNo, the number " << NumberToSearch << " does not exist in the matrix.\n";

    return 0;
}
