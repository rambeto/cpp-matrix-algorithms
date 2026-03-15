/*
===========================================================
Problem: Sum of Matrix Rows into an Array
Description:
This program demonstrates working with a 3x3 matrix in C++.

Steps:
1. Generate random numbers.
2. Fill a 3x3 matrix with random values (1–100).
3. Print the matrix in a formatted structure.
4. Calculate the sum of each row.
5. Store the row sums in a separate array.
6. Print the array containing the row sums.

Concepts Practiced:
- 2D Arrays (Matrices)
- Nested Loops
- Function Decomposition
- Random Number Generation
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
Purpose : Fill a matrix with random numbers (1–100).
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
Function: SumMatrixRowsInArray
Purpose : Store the sum of each row into a separate array.
-----------------------------------------------------------
*/
void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        arrSum[i] = RowSum(arr, i, Cols);
    }
}

/*
-----------------------------------------------------------
Function: PrintRowsSumArray
Purpose : Print the array that contains row sums.
-----------------------------------------------------------
*/
void PrintRowsSumArray(int arr[3], short Rows)
{
    cout << "\nThe following are the sum of each row in the matrix:\n";

    for (short i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;
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
    int arrSum[3];

    // Fill matrix with random numbers
    FillMatrixWithRandomNumbers(arr, 3, 3);

    // Print matrix
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    // Calculate row sums and store them in an array
    SumMatrixRowsInArray(arr, arrSum, 3, 3);

    // Print the row sums
    PrintRowsSumArray(arrSum, 3);

    system("pause>0");
}
