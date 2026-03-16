/*
Problem #40
Overloading JoinString to handle both Vectors and Arrays.

Concepts:
- Function Overloading (Same name, different parameters)
- Array processing vs Vector processing
- String concatenation and cleanup
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;

/*
-----------------------------------------------------------
Function: ReadString
Purpose : Reads a full line of text from the user.
-----------------------------------------------------------
*/
string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

/*
-----------------------------------------------------------
Function: JoinString (Overload 1: Vector)
Purpose : Joins elements of a vector into a single string.
-----------------------------------------------------------
*/
string JoinString(vector <string> vString, string Delim)
{
	string str = "";
	for (string& word : vString)
		str = str + word + Delim;

	return str.substr(0, str.length() - Delim.length());
}

/*
-----------------------------------------------------------
Function: JoinString (Overload 2: Array)
Purpose : Joins elements of a fixed-size array into a single string.
-----------------------------------------------------------
*/
string JoinString(string arrString[], short Length, string Delim)
{
	string str = "";
	for (short i = 0; i < Length; i++)
	{
		str = str + arrString[i] + Delim;
	}
	return str.substr(0, str.length() - Delim.length());
}

int main()
{
	vector <string> Words = { "Mohamed", "Ali", "Fadi", "Maher", "Ramadan" };
	string arrString[] = { "Mohamed", "Ali", "Fadi", "Maher", "Ramadan" };

	cout << "\nVector after join: \n";
	cout << JoinString(Words, " ");

	cout << "\n\nArray after join: \n";
	cout << JoinString(arrString, 5, " ");

	system("pause>0");
	return 0;
}
