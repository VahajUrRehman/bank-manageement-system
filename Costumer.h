#ifndef Costumer_H
#define Costumer_H
#include<iostream>
#include<fstream>
#include"Person.h"
#include"Authentication.h" 
#include<string>
#include<ctime>
string getCurrentTimeAndDate() //https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
{
    // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   string dt = ctime(&now);
   return dt;
}
class Costumer:public Person{
private:
    int accountBalance; 
public:
Costumer();
void Deposit(int dp);
void Withdrawl(int wd);
int getBalance();
void AccountStatement();    
};
Costumer::Costumer()
{
    accountBalance =0;
}
void Costumer::Deposit(int dp)
{
    accountBalance = accountBalance+dp;
    cout<<"The Ammount you Have Deposited Is: "<<dp<<endl;
    ofstream file;
    
    file.open(getFileName().c_str(),ios::app|ios::out); //https://stackoverflow.com/a/42026179/14565490
    file<<"["<<getCurrentTimeAndDate()<<"]"<<"    "<<"Deposited: "<<dp<<"    "<<"New Balance: "<<accountBalance<<endl;
    file.close();
    
}
void Costumer::Withdrawl(int wd)
{
    if(wd<accountBalance)
    {
        accountBalance=accountBalance-wd;
        cout<<"The Amount Withdrawn Is: "<<wd<<endl;
        ofstream file;
        file.open(getFileName().c_str(),ios::app|ios::out); //(c_str() Function)  https://stackoverflow.com/a/42026179/14565490
        file<<"["+getCurrentTimeAndDate()+"]" <<"Withdrawn: "<<wd<<"    "<<"New Balance: "<<accountBalance<<endl;
        file.close();
    }
    else{
        cout<<"\t\t----------You Have Insufficient Balance------------"<<endl;
    }
}
int Costumer::getBalance()
{
    return accountBalance;
}
void Costumer::AccountStatement()
{
    ifstream file;
    file.open(getFileName().c_str(),ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    } 
    
#endif