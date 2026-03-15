/*
Problem #18
Print intersected numbers between two matrices.

Concepts:
- 2D Arrays
- Nested Loops
- Searching Algorithms (Intersection)
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// ... (الدوال RandomNumber, FillMatrixWithRandomNumbers, PrintMatrix, IsExistsNumberInMatrix كما هي في كودك) ...

/*
-----------------------------------------------------------
Function: PrintIntersectedNumbers
Purpose : Print common elements found in both matrices.
-----------------------------------------------------------
*/
void PrintIntersectedNumbers(int arr1[3][3], int arr2[3][3], short Rows, short Cols)
{
    cout << "\nIntersected Numbers:\n";
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (IsExistsNumberInMatrix(arr2, arr1[i][j], Rows, Cols))
            {
                cout << arr1[i][j] << "\t";
            }
        }
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[3][3], arr2[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithRandomNumbers(arr1, Rows, Cols);
    FillMatrixWithRandomNumbers(arr2, Rows, Cols);

    cout << "\nMatrix [1]:\n";
    PrintMatrix(arr1, Rows, Cols);
    
    cout << "\nMatrix [2]:\n";
    PrintMatrix(arr2, Rows, Cols);
    
    PrintIntersectedNumbers(arr1, arr2, Rows, Cols);

    return 0;
}
