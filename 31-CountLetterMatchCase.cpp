/*
Problem #31
Count a character in a string (Case sensitive & Case insensitive).

Concepts:
- Boolean Flags (MatchCase)
- Function modularity
- Helper functions for case inversion
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Read input string
string ReadString()
{
    string S1;
    cout << "\nPlease Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

// Read input character
char ReadChar()
{
    char Ch1;
    cout << "\nPlease Enter a Character?\n";
    cin >> Ch1;
    return Ch1;
}

// Invert letter case (Helper function)
char InvertLetterCase(char char1)
{
    return isupper(char1) ? tolower(char1) : toupper(char1);
}

// Main logic to count the character
short CountLetter(string S1, char Letter, bool MatchCase = true)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (MatchCase)
        {
            if (S1[i] == Letter) Counter++;
        }
        else
        {
            if (tolower(S1[i]) == tolower(Letter)) Counter++;
        }
    }
    return Counter;
}

int main()
{
    string S1 = ReadString();
    char Ch1 = ReadChar();

    cout << "\nLetter '" << Ch1 << "' Count = " 
         << CountLetter(S1, Ch1) << endl;

    cout << "Letter '" << Ch1 << "' Or '" << InvertLetterCase(Ch1) << "' "
         << "Count = " << CountLetter(S1, Ch1, false) << endl;

    system("pause>0");
    return 0;
}
