/*
Problem #04
Calculate the sum of each column in a matrix.

Concepts:
- 2D Arrays
- Column Traversal
- Nested Loops
*/

/*
===========================================================
Problem: Sum of Each Column in a Matrix
Description:
This program performs basic operations on a 3x3 matrix.

Steps:
1. Generate random numbers.
2. Fill the matrix with random values (1–100).
3. Print the matrix in a formatted layout.
4. Calculate the sum of each column.
5. Display the column sums.

Concepts Practiced:
- 2D Arrays (Matrices)
- Nested Loops
- Column Traversal
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
Purpose : Fill the matrix with random numbers (1–100).
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
Purpose : Display the matrix elements in formatted form.
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
Function: ColSum
Purpose : Calculate the sum of a specific column.
-----------------------------------------------------------
*/
int ColSum(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;

    for (short i = 0; i < Rows; i++)
    {
        Sum += arr[i][ColNumber];
    }

    return Sum;
}

/*
-----------------------------------------------------------
Function: PrintEachColSum
Purpose : Print the sum of each column in the matrix.
-----------------------------------------------------------
*/
void PrintEachColSum(int arr[3][3], short Rows, short Cols)
{
    cout << "\nThe following are the sum of each column in the matrix:\n";

    for (short j = 0; j < Cols; j++)
    {
        cout << "Column " << j + 1 << " Sum = "
             << ColSum(arr, Rows, j) << endl;
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

    // Fill the matrix with random numbers
    FillMatrixWithRandomNumbers(arr, 3, 3);

    // Print the matrix
    cout << "\nThe following is a 3x3 random matrix:\n";
    PrintMatrix(arr, 3, 3);

    // Print the sum of each column
    PrintEachColSum(arr, 3, 3);

    system("pause>0");
}
