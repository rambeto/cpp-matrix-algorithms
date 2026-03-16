/*
Problem #36
Count the number of words in a string.

Concepts:
- String Tokenization
- Iterative searching (find / substr)
- Counting logic
*/

#include <iostream>
#include <string>

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
Function: CountWords
Purpose : Splits string by spaces and returns the total word count.
-----------------------------------------------------------
*/
short CountWords(string S1)
{
    string delim = " ";
    short Counter = 0;
    short pos = 0;
    string sWord;

    // Remove leading/trailing spaces for accurate counting
    // (Optional: this logic is simple and works for standard inputs)
    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
            Counter++;
        
        S1.erase(0, pos + delim.length());
    }

    // Account for the last word
    if (S1 != "")
        Counter++;

    return Counter;
}

int main()
{
    string S1 = ReadString();
    
    cout << "\nThe number of words in this string is: " 
         << CountWords(S1) << endl;

    system("pause>0");
    return 0;
}
