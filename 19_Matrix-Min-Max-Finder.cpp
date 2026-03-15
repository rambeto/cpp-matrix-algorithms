/*
Problem #19
Find the Minimum and Maximum numbers in a matrix.

Concepts:
- 2D Arrays
- Finding Extremes (Min/Max)
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: MinNumberInMatrix
Purpose : Find the smallest value in the matrix.
-----------------------------------------------------------
*/
int MinNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    int MinNumber = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] < MinNumber)
                MinNumber = arr[i][j];
        }
    }
    return MinNumber;
}

/*
-----------------------------------------------------------
Function: MaxNumberInMatrix
Purpose : Find the largest value in the matrix.
-----------------------------------------------------------
*/
int MaxNumberInMatrix(int arr[3][3], short Rows, short Cols)
{
    int MaxNumber = arr[0][0];
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] > MaxNumber)
                MaxNumber = arr[i][j];
        }
    }
    return MaxNumber;
}

// ... (بقية الدوال كما في كودك) ...

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithRandomNumbers(arr, Rows, Cols);

    cout << "\nMatrix:\n";
    PrintMatrix(arr, Rows, Cols);

    cout << "\nMin Number in Matrix: " << MinNumberInMatrix(arr, Rows, Cols) << endl;
    cout << "Max Number in Matrix: " << MaxNumberInMatrix(arr, Rows, Cols) << endl;

    return 0;
}
