/*
Problem #34
Split a string into words based on spaces.

Concepts:
- String manipulation using find() and substr()
- String erasure (modifying the string in-place)
- Handling delimiters (delimiting strings)
*/

#include <string>
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
Function: PrintEachWordInString
Purpose : Splits a string into individual words using 
          space as a delimiter and prints them.
-----------------------------------------------------------
*/
void PrintEachWordInString(string S1)
{
	string delim = " ";
	cout << "\nYour string words are: \n\n";
	short pos = 0;
	string sWord;

	// Keep searching for the delimiter until it's no longer found
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		// Extract the word before the delimiter
		sWord = S1.substr(0, pos);
		
		// Ensure we don't print empty strings (multiple spaces)
		if (sWord != "")
			cout << sWord << endl;
		
		// Remove the word and the delimiter from the original string
		S1.erase(0, pos + delim.length());
	}
	
	// Print the last word remaining in the string
	if (S1 != "")
		cout << S1 << endl;
}

int main()
{
	PrintEachWordInString(ReadString());

	system("pause>0");
	return 0;
}
