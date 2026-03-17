/*
Problem #42
Replace words in a string using built-in C++ functions.

Concepts:
- String searching (find)
- String manipulation (replace)
- While loops for global replacement
*/

#include <string>
#include <iostream>
#include <vector>

using namespace std;

/*
-----------------------------------------------------------
Function: ReplaceWordInStringUsingBuiltInFunction
Purpose : Searches for all occurrences of 'StringToReplace' 
          and replaces them with 'sReplaceTo' using S1.replace().
-----------------------------------------------------------
*/
string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sReplaceTo)
{
	short pos = S1.find(StringToReplace);

	// Continue replacing as long as the target string is found
	while (pos != std::string::npos)
	{
		// Parameters: (Starting Position, Length of old string, New string)
		S1 = S1.replace(pos, StringToReplace.length(), sReplaceTo);

		// Find the next occurrence
		pos = S1.find(StringToReplace);
	}

	return S1;
}

int main()
{
	string name = "Ramadan Eid From Egypt, Egypt is nice country";
	string target = "Egypt";
	string replacement = "USA";

	cout << "Original String: " << name << endl;
	cout << "After Replacement: ";
	cout << ReplaceWordInStringUsingBuiltInFunction(name, target, replacement) << endl;

	system("pause>0");
	return 0;
}
