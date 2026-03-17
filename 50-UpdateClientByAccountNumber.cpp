/*
Problem #50
Update Client by Account Number.

Concepts:
- Record Identification (Search)
- Data Modification (Updating Struct fields)
- Data Persistence (Rewriting File with updated data)
- Buffer Handling (cin.ignore)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const string ClientsFileName = "Clients.txt";

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
Function: SplitString
Purpose : Splits string by delimiter to help in parsing.
-----------------------------------------------------------
*/
vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord;
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos);
        if (sWord != "")
        {
            vString.push_back(sWord);
        }
        S1.erase(0, pos + Delim.length());
    }
    if (S1 != "")
    {
        vString.push_back(S1);
    }
    return vString;
}

/*
-----------------------------------------------------------
Function: ConvertLinetoRecord
Purpose : Parses file line into a client struct.
-----------------------------------------------------------
*/
sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
    sClient Client;
    vector<string> vClientData = SplitString(Line, Seperator);
    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]);
    return Client;
}

/*
-----------------------------------------------------------
Function: ConvertRecordToLine
Purpose : Converts struct back to a formatted string line.
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

/*
-----------------------------------------------------------
Function: LoadCleintsDataFromFile
Purpose : Loads all records from file into a vector.
-----------------------------------------------------------
*/
vector <sClient> LoadCleintsDataFromFile(string FileName)
{
    vector <sClient> vClients;
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open())
    {
        string Line;
        while (getline(MyFile, Line))
        {
            vClients.push_back(ConvertLinetoRecord(Line));
        }
        MyFile.close();
    }
    return vClients;
}

/*
-----------------------------------------------------------
Function: PrintClientCard
Purpose : Displays details of a specific client.
-----------------------------------------------------------
*/
void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "-----------------------------------";
    cout << "\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code      : " << Client.PinCode;
    cout << "\nName          : " << Client.Name;
    cout << "\nPhone         : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";
}

/*
-----------------------------------------------------------
Function: FindClientByAccountNumber
Purpose : Searches for a client in the vector.
-----------------------------------------------------------
*/
bool FindClientByAccountNumber(string AccountNumber, vector <sClient> vClients, sClient& Client)
{
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }
    return false;
}

/*
-----------------------------------------------------------
Function: ReadEdit
Purpose : Reads new values for an existing client record.
-----------------------------------------------------------
*/
sClient ReadEdit(sClient Client)
{
    cout << "Enter PinCode: ";
    cin >> Client.PinCode;
    cin.ignore(); // clear buffer
    cout << "Enter Name: ";
    getline(cin, Client.Name);
    cout << "Enter Phone: ";
    cin >> Client.Phone;
    cout << "Enter Account Balance: ";
    cin >> Client.AccountBalance;
    return Client;
}

/*
-----------------------------------------------------------
Function: SaveClientDataToFile
Purpose : Overwrites file with the updated vector content.
-----------------------------------------------------------
*/
void SaveClientDataToFile(string FileName, vector <sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    if (MyFile.is_open())
    {
        for (sClient& C : vClients)
        {
            MyFile << ConvertRecordToLine(C) << endl;
        }
        MyFile.close();
    }
}

/*
-----------------------------------------------------------
Function: EditClient
Purpose : Orchestrates finding, editing, and saving a record.
-----------------------------------------------------------
*/
void EditClient(string AccountNumber, vector <sClient>& vClients)
{
    sClient Client;
    char Answer = 'n';
    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);
        cout << "\nAre you sure you want to edit this client? [Y/N]: ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            for (sClient& C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ReadEdit(C);
                    break;
                }
            }
            SaveClientDataToFile(ClientsFileName, vClients);
            cout << "\nClient Edited Successfully.\n";
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") not found.\n";
    }
}

/*
-----------------------------------------------------------
Function: ReadClientAccountNumber
Purpose : Input helper for Account Number.
-----------------------------------------------------------
*/
string ReadClientAccountNumber()
{
    string AccountNumber = "";
    cout << "\nPlease enter Account Number: ";
    cin >> AccountNumber;
    return AccountNumber;
}

int main()
{
    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    EditClient(AccountNumber, vClients);
    
    system("pause>0");
    return 0;
}
