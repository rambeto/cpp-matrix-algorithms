/*
Problem #09
Calculate the sum of all elements in a 3x3 matrix filled with random numbers.

Concepts:
- 2D Arrays
- Matrix Traversal
- Summation
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//-----------------------------------------------------------
// Function: RandomNumber
// Purpose : Generate a random number between From and To
//-----------------------------------------------------------
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

//-----------------------------------------------------------
// Function: FillMatrixWithRandomNumbers
// Purpose : Fill a 2D matrix with random numbers
//-----------------------------------------------------------
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            arr[i][j] = RandomNumber(1, 10);
}

//-----------------------------------------------------------
// Function: PrintMatrix
// Purpose : Display the matrix in formatted style
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
// Function: SumOfMatrix
// Purpose : Calculate and return the sum of all elements in a matrix
//-----------------------------------------------------------
int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
    int Sum = 0;
    for (short i = 0; i < Rows; i++)
        for (short j = 0; j < Cols; j++)
            Sum += arr[i][j];
    return Sum;
}

//-----------------------------------------------------------
// Main Function
//-----------------------------------------------------------
int main()
{
    srand((unsigned)time(NULL)); // Seed random generator

    int matrix[3][3];
    short Rows = 3, Cols = 3;

    FillMatrixWithRandomNumbers(matrix, Rows, Cols);

    cout << "\nRandom 3x3 Matrix:\n";
    PrintMatrix(matrix, Rows, Cols);

    int totalSum = SumOfMatrix(matrix, Rows, Cols);
    cout << "\nSum of all elements in the matrix = " << totalSum << "\n";

    system("pause>0");
}
