/*
Problem #06
Fill a 3x3 matrix with sequential numbers (1 to 9) and print it.

Concepts:
- 2D Arrays
- Matrix Traversal
- Sequential Number Filling
*/

#include <iostream>
#include <iomanip>
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
// Function: FillMatrixWithSequentialNumbers
// Purpose : Fill a 2D matrix with sequential numbers starting from 1
// Inputs  : arr - 2D matrix, Rows - number of rows, Cols - number of columns
//-----------------------------------------------------------
void FillMatrixWithSequentialNumbers(int arr[3][3], short Rows, short Cols)
{
    int Counter = 1;
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arr[i][j] = Counter++;
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
// Main Function
//-----------------------------------------------------------
int main()
{
    srand((unsigned)time(NULL)); // Seed random generator

    int matrix[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithSequentialNumbers(matrix, Rows, Cols);
    cout << "\n3x3 Sequential Matrix:\n";
    PrintMatrix(matrix, Rows, Cols);

    system("pause>0");
}
