/*
Problem #15
Count occurrences of a specific number in a matrix.

Concepts:
- 2D Arrays
- Frequency Counting
- Nested Loops
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
-----------------------------------------------------------
Function: CountNumberInMatrix
Purpose : Count how many times a number appears in the matrix.
-----------------------------------------------------------
*/
int CountNumberInMatrix(int arr[3][3], int Number, short Rows, short Cols)
{
    int Counter = 0;
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (arr[i][j] == Number)
                Counter++;
        }
    }
    return Counter;
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

    int arr[3][3] = { {9,0,0}, {0,9,0}, {0,0,9} };
    short Rows = 3, Cols = 3;
    int Number = 0;

    cout << "\nMatrix:\n";
    PrintMatrix(arr, Rows, Cols);
    
    cout << "\nNumber " << Number << " appears " 
         << CountNumberInMatrix(arr, Number, Rows, Cols) 
         << " time(s) in the matrix.\n";

    return 0;
}
