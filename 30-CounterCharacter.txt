/*
Problem #30
Count occurrences of a specific character in a string.

Concepts:
- String Traversal
- Counting Logic
- Character Comparison
*/

#include <iostream>
#include <string>

using namespace std;

/*
-----------------------------------------------------------
Function: CountLetters
Purpose : Counts how many times a specific character 'ch' 
          appears in the string 'str'.
-----------------------------------------------------------
*/
short CountLetters(string str, char ch)
{
    short Counter = 0;
    for (short i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
            Counter++;
    }
    return Counter;
}

int main()
{
    string str = "Ramadan Eid Fathi";
    char charToCount = 'a';

    cout << "Original String: " << str << endl;
    cout << "Character to count: " << charToCount << endl;
    cout << "Count: " << CountLetters(str, charToCount) << endl;

    system("pause>0");
    return 0;
}
