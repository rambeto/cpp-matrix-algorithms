/*
Problem #29
Count Capital, Small, and All letters in a string 
using Enum and Functions.

Concepts:
- Enumeration (enWhatToCount)
- Function overloading/logic switching
- String traversal
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Read input string from user
string ReadString()
{
    string S1;
    cout << "Please Enter Your String?\n";
    getline(cin, S1);
    return S1;
}

// Enum to define counting options
enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

// Generic function to count based on Enum
short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
    if (WhatToCount == enWhatToCount::All)
    {
        return S1.length();
    }

    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
            Counter++;
        else if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
            Counter++;
    }
    return Counter;
}

// Helper functions for specific counts
short CountCapitalLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (isupper(S1[i])) Counter++;
    }
    return Counter;
}

short CountSmallLetters(string S1)
{
    short Counter = 0;
    for (short i = 0; i < S1.length(); i++)
    {
        if (islower(S1[i])) Counter++;
    }
    return Counter;
}

int main()
{
    string S1 = ReadString();

    cout << "\n--- Method 1 (Direct functions) ---\n";
    cout << "String Length = " << S1.length() << endl;
    cout << "Capital Letters Count = " << CountCapitalLetters(S1) << endl;
    cout << "Small Letters Count = " << CountSmallLetters(S1) << endl;

    cout << "\n--- Method 2 (Using Enum) ---\n";
    cout << "String Length = " << CountLetters(S1) << endl;
    cout << "Capital Letters Count = " << CountLetters(S1, enWhatToCount::CapitalLetters) << endl;
    cout << "Small Letters Count = " << CountLetters(S1, enWhatToCount::SmallLetters) << endl;

    system("pause>0");
    return 0;
}
