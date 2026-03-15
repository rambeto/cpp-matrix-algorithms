#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void PrintMiddleRow(int arr[3][3], short Rows, short Cols)
{
	int HelfRows = Rows / 2;
	for (short i = 0; i < Rows; i++)
	{
		printf(" %0*d  ", 2, arr[HelfRows][i]);
	}
}
void PrintMiddleCol(int arr[3][3], short Rows, short Cols)
{
	int HelfCols = Cols / 2;
	for (short i = 0; i < Rows; i++)
	{
		printf(" %0*d  ", 2, arr[HelfRows][i]);
	}
}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[3][3];
	int Rows= 3, Cols = 3;

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix[1]:\n";
	PrintMatrix(arr, 3, 3);
	cout << "\nMeddil Row in matrix:\n";
	PrintMiddleRow(arr, 3, 3);
	cout << "\nMeddil Col in matrix:\n";
	PrintMiddleCol(arr, 3, 3);
	
}
