/*
Problem #49
Delete Client by Account Number.

Concepts:
- Logical Deletion (MarkForDelete flag)
- File Overwriting (ios::out)
- Data Filtering during File Writing
- Vector Synchronization with Files
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
    bool MarkForDelete = false; // Flag to indicate if the record should be removed
};

/*
-----------------------------------------------------------
Function: SplitString
Purpose : Splits a line into tokens using a delimiter.
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
    vector<string> vClientData;
    vClientData = SplitString(Line, Seperator);
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
    cout << "\nAccout Number  : " << Client.AccountNumber;
    cout << "\nPin Code       : " << Client.PinCode;
    cout << "\nName           : " << Client.Name;
    cout << "\nPhone          : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
    cout << "\n-----------------------------------\n";
}

/*
-----------------------------------------------------------
Function: FindClientByAccountNumber
Purpose : Checks if a client exists in the vector.
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
Function: MarkClientForDeleteByAccountNumber
Purpose : Sets the MarkForDelete flag to true for the target client.
-----------------------------------------------------------
*/
bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
    for (sClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}

/*
-----------------------------------------------------------
Function: SaveCleintsDataToFile
Purpose : Rewrites the file excluding clients marked for deletion.
-----------------------------------------------------------
*/
vector <sClient> SaveCleintsDataToFile(string FileName, vector <sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out); // Overwrite mode
    string DataLine;
    if (MyFile.is_open())
    {
        for (sClient C : vClients)
        {
            if (C.MarkForDelete == false)
            {
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}

/*
-----------------------------------------------------------
Function: DeleteClientByAccountNumber
Purpose : Main deletion logic including confirmation and saving.
-----------------------------------------------------------
*/
bool DeleteClientByAccountNumber(string AccountNumber, vector <sClient>& vClients)
{
    sClient Client;
    char Answer = 'n';
    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);
        cout << "\nAre you sure you want delete this client? y/n ? ";
        cin >> Answer;
        if (Answer == 'y' || Answer == 'Y')
        {
            MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
            SaveCleintsDataToFile(ClientsFileName, vClients);
            
            // Refresh vector from file
            vClients = LoadCleintsDataFromFile(ClientsFileName);
            cout << "\nClient Deleted Successfully.";
            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
    }
    return false;
}

/*
-----------------------------------------------------------
Function: ReadClientAccountNumber
Purpose : Input helper.
-----------------------------------------------------------
*/
string ReadClientAccountNumber()
{
    string AccountNumber = "";
    cout << "\nPlease enter AccountNumber? ";
    cin >> AccountNumber;
    return AccountNumber;
}

int main()
{
    vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    DeleteClientByAccountNumber(AccountNumber, vClients);
    
    system("pause>0");
    return 0;
}
