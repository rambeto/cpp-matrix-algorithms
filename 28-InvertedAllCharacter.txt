/*
Problem #28
Invert character case of a string.

Concepts:
- String Traversal
- Character Case Transformation
- Helper Functions
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
-----------------------------------------------------------
Function: InvertedCharacter
Purpose : Flips the case of a single character.
-----------------------------------------------------------
*/
char InvertedCharacter(char Ch)
{
    return (isupper(Ch) ? tolower(Ch) : toupper(Ch));
}

/*
-----------------------------------------------------------
Function: InvertedAllCharacter
Purpose : Inverts the case of every character in a string.
-----------------------------------------------------------
*/
string InvertedAllCharacter(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = InvertedCharacter(str[i]);
    }
    return str;
}

int main()
{
    string str = "RamadanEid";
    
    cout << "Original string : " << str << endl;
    cout << "Inverted string : " << InvertedAllCharacter(str) << endl;
    
    system("pause>0");
    return 0;
}
