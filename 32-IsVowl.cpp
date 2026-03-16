/*
Problem #32
Check if a character is a Vowel.

Concepts:
- Boolean functions
- Logical OR operator
- Character classification
*/

#include <iostream>
#include <string>

using namespace std;

// دالة التحقق من كون الحرف حرفاً متحركاً
bool IsVowelLetter(char ch)
{
    ch = tolower(ch);
    return ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
}

int main()
{
    char ch;
    cout << "Please Enter a Character: ";
    cin >> ch;

    if (IsVowelLetter(ch))
    {
        cout << "Yes, Letter '" << ch << "' is a Vowel." << endl;
    }
    else
    {
        cout << "No, Letter '" << ch << "' is NOT a Vowel." << endl;
    }

    system("pause>0");
    return 0;
}
