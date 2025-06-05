#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
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

    srand(time(0));
    AccNo=rand()*rand()+rand()*rand();

    cout<<"Enter Your Name :: ";
    cin.getline(Name, 25);

    cout<<"Enter Your Father Name :: ";
    cin.getline(Fname, 25);

    cout<<"Enter Your CNIC :: ";
    cin.getline(cnic, 25);

    cout<<"Enter Your Phone Number :: ";
    cin.getline(P_No, 25);

    cout<<"Enter Your Email :: ";
    cin.getline(Email, 25);

    cout<<"Enter Your Address :: ";
    cin.getline(Address, 25);

    cout<<"Enter Your Ammount :: ";
    cin>>Amount;

    file.open("dataSave4.txt",ios :: out | ios :: app);
    file<<AccNo<<"\t"<<Name<<"\t"<<Fname<<"\t"<<cnic<<"\t"<<P_No<<"\t"<<Email<<"\t"<<Address<<"\t"<<Amount<<endl;

    file.close();
    cout<<endl;
    return 0;
}

