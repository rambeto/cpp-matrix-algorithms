/*
Problem #05
Calculate and store the sum of each column in a 3x3 matrix.

Concepts:
- 2D Arrays
- Column Traversal
- Abstraction (using separate 1D array to store sums)
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//-----------------------------------------------------------
// Function: RandomNumber
// Purpose : Generate a random number between From and To
// Inputs  : From - lower bound, To - upper bound
// Output  : Random integer within the specified range
//-----------------------------------------------------------
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

//-----------------------------------------------------------
// Function: FillMatrixWithRandomNumbers
// Purpose : Fill a 2D matrix with random numbers (1–100)
// Inputs  : arr - 2D matrix, Rows - number of rows, Cols - number of columns
//-----------------------------------------------------------
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arr[i][j] = RandomNumber(1, 100);
}

//-----------------------------------------------------------
// Function: PrintMatrix
// Purpose : Display the matrix in formatted style
// Inputs  : arr - 2D matrix, Rows - number of rows, Cols - number of columns
//-----------------------------------------------------------
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
            cout << setw(3) << arr[i][j] << " ";
        cout << "\n";
    }
}

//-----------------------------------------------------------
// Function: SumColumn
// Purpose : Calculate the sum of a specific column
// Inputs  : arr - 2D matrix, Rows - number of rows, ColNumber - index of column
// Output  : Sum of the column
//-----------------------------------------------------------
int SumColumn(int arr[3][3], short Rows, short ColNumber)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
        Sum += arr[i][ColNumber];
    return Sum;
}

//-----------------------------------------------------------
// Function: SumMatrixColumnsInArray
// Purpose : Store the sum of each column in a 1D array
// Inputs  : arr - 2D matrix, arrSum - 1D array, Rows, Cols
//-----------------------------------------------------------
void SumMatrixColumnsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
    for (short j = 0; j < Cols; j++)
        arrSum[j] = SumColumn(arr, Rows, j);
}

//-----------------------------------------------------------
// Function: PrintColumnSums
// Purpose : Print the sums of all columns stored in arrSum
// Inputs  : arrSum - 1D array, length - number of columns
//-----------------------------------------------------------
void PrintColumnSums(int arrSum[3], short length)
{
    cout << "\nSum of each column:\n";
    for (short i = 0; i < length; i++)
        cout << "Column " << i + 1 << " Sum = " << arrSum[i] << endl;
}

//-----------------------------------------------------------
// Main Function
//-----------------------------------------------------------
int main()
{
    srand((unsigned)time(NULL)); // Seed random generator

    int matrix[3][3];  // 3x3 matrix
    int colSum[3];      // Array to store column sums

    FillMatrixWithRandomNumbers(matrix, 3, 3);
    cout << "\nRandom 3x3 matrix:\n";
    PrintMatrix(matrix, 3, 3);

    SumMatrixColumnsInArray(matrix, colSum, 3, 3);
    PrintColumnSums(colSum, 3);

    system("pause>0");
}
