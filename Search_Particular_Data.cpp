#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int AccNo;
    char Name[25];
    char Fname[25];
    char cnic[25];
    char P_No[25];
    char Email[25];
    char Address[25];
    float Amount;
    fstream file;

    int SearchAccNo;
    cout<<"Enter Your Account Number ::";
    cin>>SearchAccNo;

    file.open("dataSave4.txt",ios :: in);
    if(!file)
    {
        cout<<"File Not Found...";
        return 1;
    }
    bool Found=false;
    file>>AccNo>>Name>>Fname>>cnic>>P_No>>Email>>Address>>Amount;
    while(!file.eof())
    {
        if(AccNo==SearchAccNo)
        {
            cout<<"\nAccount Number::"<<AccNo;
            cout<<"\nName          ::"<<Name;
            cout<<"\nFather's Name ::"<<Fname;
            cout<<"\nCNIC          ::"<<cnic;
            cout<<"\nPhone Number  ::"<<P_No;
            cout<<"\nEmail         ::"<<Email;
            cout<<"\nAddress       ::"<<Address;
            cout<<"\nAmount        ::"<<Amount;
            Found=true;
            return 0;
        }
        file>>AccNo>>Name>>Fname>>cnic>>P_No>>Email>>Address>>Amount;
    }
    if(Found==false)
    {
        cout<<"Account Not Found...";
        return 0;
    }
    cout<<endl;
    return 0;
}