/*
Problem #25
Convert the first letter of each word to lowercase.

Concepts:
- String Manipulation
- tolower() function
- Case conversion in C++
*/

#include <iostream>
#include <string>
#include <cctype> // Required for tolower()

using namespace std;

/*
-----------------------------------------------------------
Function: LowerFirstLetterOfEachWord
Purpose : Iterates through the string and ensures the first 
          character of every word is lowercase.
-----------------------------------------------------------
*/
string LowerFirstLetterOfEachWord(string str) 
{
    bool isFirstLetter = true;

    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && isFirstLetter)
        {
            str[i] = tolower(str[i]); 
        }

        // Update the flag for the next character
        isFirstLetter = (str[i] == ' ');
    }
    return str;
}

int main()
{
    string text = "RAMADAN EID FATHI";
    
    cout << "\nOriginal String: " << text << endl;
    cout << "Result String  : " << LowerFirstLetterOfEachWord(text) << endl;

    system("pause>0");
    return 0;
}
