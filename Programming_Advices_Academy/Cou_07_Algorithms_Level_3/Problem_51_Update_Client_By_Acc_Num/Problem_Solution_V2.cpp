#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

const string ClientsFileName = "Clients.txt";

struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance;
    // bool MarkForDelete = false;
    bool MarkForUpdate = false;
};

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short pos = 0;
    string sWord; // Define a string variable.

    // Use find() function to get the position of the delimiters.
    while ((pos = S1.find(Delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); // Store the word.
        if (sWord != "")
        {
            vString.push_back(sWord);
        }

        S1.erase(0, pos + Delim.length());
    }

    if (S1 != "")
    {
        vString.push_back(S1); // It adds last word of the string.
    }
    return vString;
}

sClient ConvertLinetoRecord(string Line, string Separator = "#//#")
{
    sClient Client;
    vector<string> vClientData;

    vClientData = SplitString(Line, Separator);

    Client.AccountNumber = vClientData[0];
    Client.PinCode = vClientData[1];
    Client.Name = vClientData[2];
    Client.Phone = vClientData[3];
    Client.AccountBalance = stod(vClientData[4]); // Cast string to double.

    return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string stClientRecord = "";

    stClientRecord += Client.AccountNumber + Separator;
    stClientRecord += Client.PinCode + Separator;
    stClientRecord += Client.Name + Separator;
    stClientRecord += Client.Phone + Separator;
    stClientRecord += to_string(Client.AccountBalance);

    return stClientRecord;
}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
    vector<sClient> vClients;

    fstream MyFile;
    MyFile.open(FileName, ios::in); // Read mode.

    if (MyFile.is_open())
    {
        string Line;
        sClient Client;

        while (getline(MyFile, Line))
        {
            Client = ConvertLinetoRecord(Line);
            vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}

void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code     : " << Client.PinCode;
    cout << "\nName         : " << Client.Name;
    cout << "\nPhone        : " << Client.Phone;
    cout << "\nAccount Balance: " << Client.AccountBalance;
}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient &Client)
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

sClient ChangeClientRecord(string AccountNumber)
{
    sClient Client;

    Client.AccountNumber = AccountNumber;

    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);

    cout << "Enter Name? ";
    getline(cin, Client.Name);

    cout << "Enter Phone? ";
    getline(cin, Client.Phone);

    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;

    return Client;
}

vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out); // Rite mode.
    string DataLine;

    if (MyFile.is_open())
    {
        for (sClient C : vClients)
        {
            if (C.MarkForUpdate == false)
            {
                // We only write records that are not marked for delete.
                DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }

    return vClients;
}

bool UpdateClientByAccountNumber(string AccountNumber, vector<sClient> &vClients)
{
    sClient Client;
    char Answer = 'n';

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\n\nAre you sure you want update this client? y/n ? ";
        cin >> Answer;

        if (Answer == 'y' || Answer == 'Y')
        {
            for (sClient &C : vClients)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangeClientRecord(AccountNumber);
                    break;
                }
            }

            SaveClientsDataToFile(ClientsFileName, vClients);
            cout << "\n\nClient Updated Successfully.";

            return true;
        }
    }
    else
    {
        cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";

        return false;
    }
}

string ReadClientAccountNumber()
{
    string AccountNumber = "";

    cout << "Please enter AccountNumber: ";
    cin >> AccountNumber;

    return AccountNumber;
}

int main()
{
    WelcomeMessage();

    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
    string AccountNumber = ReadClientAccountNumber();
    UpdateClientByAccountNumber(AccountNumber, vClients);

    cout << endl
         << endl;

    return 0;
}