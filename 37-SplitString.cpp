/*
Problem #37
Split a string into a vector of strings based on a delimiter.

Concepts:
- String Tokenization
- Vector (Dynamic Array)
- String manipulation (find, substr, erase)
*/

#include <string>
#include <iostream>
#include <vector>

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
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

/*
-----------------------------------------------------------
Function: SplitString
Purpose : Splits the string S1 into tokens based on the 
          provided Delim, and returns them as a vector.
-----------------------------------------------------------
*/
vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;

    // Use find() to get the position of the delimiter
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // Store the word found
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        
        // Erase the processed part from S1
        S1.erase(0, pos + Delim.length());
    }

    // Add the last word if it exists
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    
    return vString;
}

int main()
{
    vector<string> vString;
    
    // Call SplitString and store result in vector
    vString = SplitString(ReadString(), " ");
    
    // Output the number of tokens found
    cout << "\nTokens = " << vString.size() << endl;
    
    // Print each token using range-based for loop
    for (string& s : vString)
    {
        cout << s << endl;
    }
    
    system("pause>0");
    return 0;
}
