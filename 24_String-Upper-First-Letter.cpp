/*
Problem #24
Convert the first letter of each word to uppercase.

Concepts:
- String Manipulation
- toupper() function
- Flag logic for word boundaries
*/

#include <iostream>
#include <string>
#include <cctype> // المكتبة الخاصة بدوال التحويل مثل toupper

using namespace std;

/*
-----------------------------------------------------------
Function: UpperFirstLetterOfEachWord
Purpose : Transforms the input string so that every word 
          starts with a capital letter.
-----------------------------------------------------------
*/
string UpperFirstLetterOfEachWord(string str)
{
    bool isFirstLetter = true;

    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ' && isFirstLetter)
        {
            str[i] = toupper(str[i]);
        }

        // Update flag: current is space? then next is a first letter
        isFirstLetter = (str[i] == ' ');
    }
    
    return str;
}

int main()
{
    string text = "ramadan eid fathi";

    cout << "\nOriginal String   : " << text << endl;
    cout << "Capitalized String: " << UpperFirstLetterOfEachWord(text) << endl;

    system("pause>0");
    return 0;
}
