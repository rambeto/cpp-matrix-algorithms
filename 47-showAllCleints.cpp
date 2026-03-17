/*
Problem #47
Load clients data from file and print it in a formatted table.

Concepts:
- File Input (fstream: ios::in)
- String to Struct conversion (Deserialization)
- Data Presentation (setw, left)
- Vectors of Structs
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
Purpose : Helper function to split the file line into tokens.
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
Purpose : Parses a string line from the file into an sClient struct.
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
	Client.AccountBalance = stod(vClientData[4]); // Converts string to double

	return Client;
}

/*
-----------------------------------------------------------
Function: LoadCleintsDataFromFile
Purpose : Reads the entire file line by line and stores 
          clients in a vector.
-----------------------------------------------------------
*/
vector <sClient> LoadCleintsDataFromFile(string FileName)
{
	vector <sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in); // Read Mode

	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			sClient Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

/*
-----------------------------------------------------------
Function: PrintClientRecord
Purpose : Prints a single client row with specific formatting.
-----------------------------------------------------------
*/
void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}

/*
-----------------------------------------------------------
Function: PrintAllClientsData
Purpose : Displays the header and iterates through the vector 
          to print all clients in a table.
-----------------------------------------------------------
*/
void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ") Client(s).";
	cout << "\n______________________________________________________________________________________________________\n" << endl;
	
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	
	cout << "\n______________________________________________________________________________________________________\n" << endl;

	for (sClient& Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout << "\n______________________________________________________________________________________________________\n" << endl;
}

int main()
{
	vector <sClient> vClients = LoadCleintsDataFromFile(ClientsFileName);
	PrintAllClientsData(vClients);

	system("pause>0");
	return 0;
}
