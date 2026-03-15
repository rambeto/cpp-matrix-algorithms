/*
Problem #20
Check if a matrix is a Palindrome Matrix.
(A matrix is a palindrome if each row is a palindrome by itself)

Concepts:
- 2D Arrays
- Symmetry Checking
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: IsPalindromeMatrix
Purpose : Check if each row in the matrix is a palindrome.
-----------------------------------------------------------
*/
bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            // Compare element with its symmetric counterpart in the row
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
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

    int arr[3][3] = { {1,2,1}, {5,5,5}, {7,3,7} };
    short Rows = 3, Cols = 3;

    cout << "\nMatrix:\n";
    PrintMatrix(arr, Rows, Cols);

    if (IsPalindromeMatrix(arr, Rows, Cols))
        cout << "\nYes, it is a Palindrome Matrix.\n";
    else
        cout << "\nNo, it is not a Palindrome Matrix.\n";

    return 0;
}
