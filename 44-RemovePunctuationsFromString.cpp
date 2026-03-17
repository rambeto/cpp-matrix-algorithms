/*
Problem #44
Remove Punctuations from a string.

Concepts:
- String filtering
- Character classification using ispunct()
- Building a new string based on conditions
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;

/*
-----------------------------------------------------------
Function: RemovePunctuationsFromString
Purpose : Iterates through the string and builds a new one 
          excluding any character that is a punctuation mark.
-----------------------------------------------------------
*/
string RemovePunctuationsFromString(string S1)
{
	string S2 = "";
	for (short i = 0; i < S1.length(); i++)
	{
		// ispunct() checks for symbols like: , . ; : ! ? etc.
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}

int main()
{
	string S1 = "Welcome to Jordan, Jordan is a nice country; it's amazing.";

	cout << "Original String:\n" << S1;

	cout << "\n\nPauncuations Removed:\n" << RemovePunctuationsFromString(S1) << endl;

	system("pause>0");
	return 0;
}
