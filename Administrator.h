#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include<iostream>
#include<fstream>
#include"Person.h"
#include"Authentication.h".
#include"Account.h"
#include"AccountList.h"

class Administrator{
private:   
    Authentication dt;
    void addUserAccount();
    void deleteUserAccount(AccountList a);
    void getListOfAccountHolder(AccountList a);
    void searchAccount(AccountList a);

    
};
void Administrator::addUserAccount()
{
    ifstream inFile;
    inFile.open("Account Application.txt", ios::in);
    string line;
    while((getline(inFile, line)))
    {
        cout<<line<<endl;
    }
}
#endif