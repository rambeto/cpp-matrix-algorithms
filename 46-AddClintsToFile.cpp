/*
Problem #46
Add multiple client records to a file.

Concepts:
- File Handling (fstream: ios::out | ios::app)
- Structs and Data Serialization
- Control Flow (Do-While loops)
- Buffer Management (cin.ignore)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

const string FileName = "Client.txt";

struct stClient {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

/*
-----------------------------------------------------------
Function: ReadNewClient
Purpose : Prompts the user for client details and returns 
          a populated stClient struct.
-----------------------------------------------------------
*/
stClient ReadNewClient()
{
	stClient Client;
	cout << "Please enter Client Data: \n";
	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Name? ";
	getline(cin, Client.Name);
	cout << "Enter Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter Account Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

/*
-----------------------------------------------------------
Function: ConvertRecordToLine
Purpose : Converts client struct into a single string line 
          delimited by a separator.
-----------------------------------------------------------
*/
string ConvertRecordToLine(stClient Client, string Seperator = "#//#")
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
Function: AddDataLineToFile
Purpose : Opens a file in Append mode and writes a new line.
-----------------------------------------------------------
*/
void AddDataLineToFile(string FileName, string Line)
{
	fstream MyFile(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << Line << endl;
		MyFile.close();
	}
}

/*
-----------------------------------------------------------
Function: AddNewClient
Purpose : Orchestrates reading a client and saving it to 
          the file.
-----------------------------------------------------------
*/
void AddNewClient()
{
	stClient Client = ReadNewClient();
	string Line = ConvertRecordToLine(Client);
	AddDataLineToFile(FileName, Line);
}

/*
-----------------------------------------------------------
Function: AddClients
Purpose : Loop to allow user to add multiple clients 
          consecutively.
-----------------------------------------------------------
*/
void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("Cls");
		cout << "Adding New Client:\n\n";
		
		AddNewClient();
		
		cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClients();
	return 0;
}
