/*
Problem #26 & #27
Convert the entire string to Lowercase and Uppercase.

Concepts:
- String Iteration
- Character Case Transformation
- std::tolower & std::toupper
*/

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

/*
-----------------------------------------------------------
Function: LowerAllString
Purpose : Converts every character in the string to lowercase.
-----------------------------------------------------------
*/
string LowerAllString(string str) 
{
    for (short i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]); 
    }
    return str;
}

/*
-----------------------------------------------------------
Function: UpperAllString
Purpose : Converts every character in the string to uppercase.
-----------------------------------------------------------
*/
string UpperAllString(string str)
{
    for (short i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main()
{
    string text = "RaMaDan EId FaThi";
    
    cout << "\nOriginal String: " << text << endl;
    cout << "Lowercase      : " << LowerAllString(text) << endl;
    cout << "Uppercase      : " << UpperAllString(text) << endl;

    system("pause>0");
    return 0;
}
