/*
===========================================================
Problem: Sum of Each Row in a Matrix
Description:
This program demonstrates basic operations on a 3x3 matrix:

1. Generate random numbers.
2. Fill a matrix with random values.
3. Print the matrix in a formatted structure.
4. Calculate the sum of each row in the matrix.

Concepts Practiced:
- 2D Arrays (Matrices)
- Nested Loops
- Random Number Generation
- Function Decomposition
===========================================================
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
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

/*
-----------------------------------------------------------
Function: FillMatrixWithRandomNumbers
Purpose : Fill a 3x3 matrix with random numbers (1–100).
-----------------------------------------------------------
*/
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

/*
-----------------------------------------------------------
Function: PrintMatrix
Purpose : Print matrix elements in a formatted layout.
-----------------------------------------------------------
*/
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/*
-----------------------------------------------------------
Function: RowSum
Purpose : Calculate the sum of a specific row in the matrix.
-----------------------------------------------------------
*/
int RowSum(int arr[3][3], short RowNumber, short Cols)
{
    int Sum = 0;

    for (short j = 0; j < Cols; j++)
    {
        Sum += arr[RowNumber][j];
    }

    return Sum;
}

/*
-----------------------------------------------------------
Function: PrintEachRowSum
Purpose : Print the sum of every row in the matrix.
-----------------------------------------------------------
*/
void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
    cout << "\nThe following are the sum of each row in the matrix:\n";

    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
    }
}

/*
-----------------------------------------------------------
Main Function
-----------------------------------------------------------
*/
int main()
{
    // Seed the random number generator (called once)
    srand((unsigned)time(NULL));

    int arr[3][3];

    // Fill matrix with random numbers
    FillMatrixWithRandomNumbers(arr, 3, 3);

    // Print the matrix
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    // Print sum of each row
    PrintEachRowSum(arr, 3, 3);

    system("pause>0");
}
