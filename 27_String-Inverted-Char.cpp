/*
Problem #28
Invert character case (Lower to Upper / Upper to Lower).

Concepts:
- Character manipulation
- Ternary Operator
- isupper(), tolower(), toupper()
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
-----------------------------------------------------------
Function: InvertCharacterCase
Purpose : Flips the case of a single character.
-----------------------------------------------------------
*/
char InvertCharacterCase(char Ch)
{
    return isupper(Ch) ? tolower(Ch) : toupper(Ch);
}

/*
-----------------------------------------------------------
Function: InvertAllStringLetters
Purpose : Inverts the case of every character in a string.
-----------------------------------------------------------
*/
string InvertAllStringLetters(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        // Calling your inverted function for each character
        str[i] = InvertCharacterCase(str[i]);
    }
    return str;
}

int main()
{
    char myChar = 'b';
    string myText = "RaMaDan Eid";

    cout << "Original Character: " << myChar << endl;
    cout << "Inverted Character: " << InvertCharacterCase(myChar) << endl;

    cout << "\nOriginal String: " << myText << endl;
    cout << "Inverted String: " << InvertAllStringLetters(myText) << endl;

    system("pause>0");
    return 0;
}
