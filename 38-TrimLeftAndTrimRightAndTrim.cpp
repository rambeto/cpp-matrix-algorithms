/*
Problem #38
Trim Left, Trim Right, and Full Trim for a string.

Concepts:
- String manipulation using substr()
- For loops (Forward and Backward)
- Space detection and removal
*/

#include <string>
#include <vector>
#include <iostream>

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
Function: TrimLeft
Purpose : Removes all leading spaces from the beginning of 
          the string.
-----------------------------------------------------------
*/
string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			// Return string starting from first non-space character
			return S1.substr(i, S1.length() - 1);
		}
	}
	return "";
}

/*
-----------------------------------------------------------
Function: TrimRight
Purpose : Removes all trailing spaces from the end of 
          the string.
-----------------------------------------------------------
*/
string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			// Return string from beginning up to the last non-space character
			return S1.substr(0, i + 1);
		}
	}
	return "";
}

/*
-----------------------------------------------------------
Function: Trim
Purpose : Removes both leading and trailing spaces by 
          combining TrimLeft and TrimRight.
-----------------------------------------------------------
*/
string Trim(string S1)
{
	return (TrimLeft(TrimRight(S1)));
}

int main()
{
	string S1 = "    Mohammed Abu-Hahdoud    ";

	cout << "\nString      = [" << S1 << "]";
	cout << "\nTrim Left   = [" << TrimLeft(S1) << "]";
	cout << "\nTrim Right  = [" << TrimRight(S1) << "]";
	cout << "\nTrim        = [" << Trim(S1) << "]";

	system("pause>0");
	return 0;
}
