/*
Problem #33
Print all vowel letters in a string.

Concepts:
- String Traversal
- Function Composition
- Conditional Output
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
Function: ReadChar
Purpose : Reads a single character and returns its lowercase form.
-----------------------------------------------------------
*/
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return tolower(Ch1);
}

/*
-----------------------------------------------------------
Function: IsVowelLetter
Purpose : Checks if a specific character is a vowel (a, e, i, o, u).
-----------------------------------------------------------
*/
bool IsVowelLetter(char ch)
{
	ch = tolower(ch);
	return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
}

/*
-----------------------------------------------------------
Function: PrintAllVowelInString
Purpose : Iterates through the string and prints all 
          detected vowel characters.
-----------------------------------------------------------
*/
void PrintAllVowelInString(string str)
{
	cout << "Vowels in string are: ";
	for (short i = 0; i < str.length(); i++)
	{
		if (IsVowelLetter(str[i]))
			cout << str[i] << " ";
	}
	cout << endl;
}

int main()
{
	PrintAllVowelInString(ReadString());

	system("pause>0");
	return 0;
}
