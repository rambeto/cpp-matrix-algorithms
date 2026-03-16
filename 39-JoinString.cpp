/*
Problem #39
Join a vector of strings into a single string with a delimiter.

Concepts:
- Vector iteration
- String concatenation
- Substring manipulation (removing the trailing delimiter)
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
Function: JoinString
Purpose : Concatenates all elements of a string vector into 
          one string, separated by the specified delimiter.
-----------------------------------------------------------
*/
string JoinString(vector <string> vString, string Delim)
{
	string str = "";

	// Loop through each word in the vector and add it with the delimiter
	for (string& word : vString)
	{
		str = str + word + Delim;
	}

	// Remove the last extra delimiter added at the end of the loop
	return str.substr(0, str.length() - Delim.length());
}

int main()
{
	// Example vector of words
	vector <string> Words = { "Hello", "World", "By", "Ramadan" };

	cout << "\nVector Elements: Hello, World, By, Ramadan\n";
	cout << "Joined String  : ";
	cout << JoinString(Words, "+++") << endl;

	system("pause>0");
	return 0;
}
