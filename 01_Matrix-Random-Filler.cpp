/*
===========================================================
Program: Random Matrix Generator
Description:
This program demonstrates basic operations on a 2D array
(Matrix) in C++.

Steps:
1. Generate random numbers within a specific range.
2. Fill a 3x3 matrix with random numbers.
3. Print the matrix in a formatted layout.
===========================================================
*/

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

/*
-----------------------------------------------------------
Function: RandomNumber
Purpose : Generate a random number between two values.
Params  :
    from -> starting range
    to   -> ending range
Return  :
    Random integer between [from, to]
-----------------------------------------------------------
*/
int RandomNumber(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;
    return randNum;
}

/*
-----------------------------------------------------------
Function: FillMatrixWithRandomNumbers
Purpose : Fill the matrix with random numbers from 1 to 100
Params  :
    matrix -> 2D array
    rows   -> number of rows
    cols   -> number of columns
-----------------------------------------------------------
*/
void FillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            matrix[i][j] = RandomNumber(1, 100);
        }
    }
}

/*
-----------------------------------------------------------
Function: PrintMatrix
Purpose : Print matrix elements in a formatted structure
Params  :
    matrix -> 2D array
    rows   -> number of rows
    cols   -> number of columns
-----------------------------------------------------------
*/
void PrintMatrix(int matrix[3][3], short rows, short cols)
{
    for (short i = 0; i < rows; i++)
    {
        for (short j = 0; j < cols; j++)
        {
            printf("%02d ", matrix[i][j]);   // Print numbers with leading zero
        }
        cout << endl;
    }
}

/*
-----------------------------------------------------------
Main Function
-----------------------------------------------------------
*/
int main()
{
    // Initialize random seed
    srand(time(NULL));

    const short rows = 3;
    const short cols = 3;

    int matrix[rows][cols];

    // Fill matrix with random values
    FillMatrixWithRandomNumbers(matrix, rows, cols);

    // Print matrix
    PrintMatrix(matrix, rows, cols);

    return 0;
}
