/*
Problem #45
Convert a Client Struct Record to a single line (String Data).

Concepts:
- Structures (struct)
- Data Serialization (Converting object to string)
- Using Delimiters/Separators
- String Concatenation
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// تعريف هيكل بيانات العميل
struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
};

/*
-----------------------------------------------------------
Function: ReadNewClient
Purpose : Prompts the user to enter client details and
          returns a populated sClient struct.
-----------------------------------------------------------
*/
sClient ReadNewClient()
{
    sClient Client;

    cout << "Enter Account Number? ";
    getline(cin >> ws, Client.AccountNumber); // ws ignores leading whitespace

    cout << "Enter PinCode? ";
    getline(cin, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

/*
-----------------------------------------------------------
Function: ConvertRecordToLine
Purpose : Converts the client struct into a single string
          line with a specific separator for file storage.
-----------------------------------------------------------
*/
string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

int main()
{
    cout << "\nPlease Enter Client Data: \n\n";
    sClient Client;
    Client = ReadNewClient();

    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client) << endl;

    system("pause>0");
    return 0;
}
