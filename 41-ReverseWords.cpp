/*
Problem #41
Reverse words in a string using SplitString and Iterators.

Concepts:
- String Tokenization (Split)
- Vector Iterators (Reverse Traversal)
- String Concatenation
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
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

/*
-----------------------------------------------------------
Function: SplitString
Purpose : Splits a string into a vector of words based on a 
          delimiter.
-----------------------------------------------------------
*/
vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

/*
-----------------------------------------------------------
Function: ReverseWordInString
Purpose : Reverses the order of words in a string using 
          iterators to traverse the vector backwards.
-----------------------------------------------------------
*/
string ReverseWordInString(string str)
{
	string word = "";
	vector <string> vString = SplitString(str, " ");

	// Use an iterator starting at the end of the vector
	vector <string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter; // Move back to the previous element
		word += *iter + " "; // Concatenate word with space
	}

	// Remove the trailing space at the end
	word = word.substr(0, word.length() - 1);
	return word;
}

int main()
{
	string name = "Ramadan Eid Fathi";

	cout << "Original String: " << name << endl;
	cout << "Reversed String: " << ReverseWordInString(name) << endl;

	system("pause>0");
	return 0;
}
