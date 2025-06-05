#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int AccNo;
    char Name[25], Fname[25], cnic[25], P_No[25], Email[25], Address[25];
    float Amount;
    fstream file, file1;

    int SearchACC;
    float newAmount;
    bool Found = false;

    cout << "Enter Your Account Number :: ";
    cin >> SearchACC;
    cout << "Enter Your Amount to Withdraw :: ";
    cin >> newAmount;

    file.open("dataSave4.txt", ios::in);
    file1.open("dataSave5.txt", ios::out);

    if (!file)
    {
        cout << "File Not Found";
        return 0;
    }

    while (file >> AccNo >> Name >> Fname >> cnic >> P_No >> Email >> Address >> Amount)
    {
        if (AccNo == SearchACC)
        {
            cout << "Your Amount Before Deposition :: " << Amount;
            if(Amount>=newAmount)
            {
                Amount -= newAmount;
            }
            else
            {
                cout<<"You Withdraw amont is greater than current amount";
            }
            cout << "\nYour Current Amount         :: " << Amount;

            Found = true;
        }

        file1 << AccNo << "\t" << Name << "\t" << Fname << "\t" << cnic << "\t"
              << P_No << "\t" << Email << "\t" << Address << "\t" << Amount << endl;
    }

    file.close();
    file1.close();

    if (!Found)
    {
        cout << "Invalid Account Number.....";
    }
    remove("dataSave4.txt");
    rename("dataSave5.txt", "dataSave4.txt");

    return 0;
}
