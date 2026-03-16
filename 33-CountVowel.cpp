/*
Problem #32
Count vowels in a string.

Concepts:
- String Traversal
- Helper Functions
- Character Classification
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
Function: CountVowel
Purpose : Iterates through the string and counts total vowels found.
-----------------------------------------------------------
*/
short CountVowel(string str)
{
    short CounterLetterVowel = 0;
    for (short i = 0; i < str.length(); i++)
    {
        if (IsVowelLetter(str[i]))
            CounterLetterVowel++;
    }
    return CounterLetterVowel;
}

int main()
{
    cout << "Vowel Count: " << CountVowel(ReadString()) << endl;

    system("pause>0");
    return 0;
}
