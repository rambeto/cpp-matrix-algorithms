/*
Problem #23
Print the first letter of each word in a string.

Concepts:
- String Traversal
- Flag Logic (Boolean State)
- Conditional Operator (Ternary)
*/

#include <iostream>
#include <string>

using namespace std;

/*
-----------------------------------------------------------
Function: PrintFirstLetterOfEachWord
Purpose : Iterates through the string and prints only the 
          first character of every word found.
-----------------------------------------------------------
*/
void PrintFirstLetterOfEachWord(string str)
{
    bool isFirstLetter = true;

    for (short i = 0; i < str.length(); i++)
    {
        // If the current character is not a space and it's marked as FirstLetter
        if (str[i] != ' ' && isFirstLetter)
        {
            cout << str[i] << " ";
        }

        // Update the flag: if current is space, next non-space is a first letter
        isFirstLetter = (str[i] == ' ');
    }
}

int main()
{
    string testString = "Ramadan Eid Fathi";

    cout << "\nOriginal String: " << testString << endl;
    cout << "First Letters: ";
    
    PrintFirstLetterOfEachWord(testString);

    cout << endl;
    system("pause>0");
    return 0;
}
