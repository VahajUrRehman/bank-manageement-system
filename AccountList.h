#ifndef ACCOUNTLIST_H
#define ACCOUNTLIST_H
#include"Account.h"
using namespace std;
class AccountList
{
    private:
    Account* current;
    Account* head;
    int size;
    public:
    AccountList();
    void createNewAccount(string fn,string ln,string mtn,string ftn,int db,int mb,int yb,string mob,string cn);
    void deleteAccount();
    void listOfAccounts();
    void AccountActivation();
    void searchAccount();
    void printAccountDetails(Account* ac);
    
};
AccountList::AccountList()
{
    current = NULL;
    head = NULL;
    size= 0;
}
void AccountList::createNewAccount(string fn,string ln,string mtn,string ftn,int db,int mb,int yb,string mob,string cn)
{
    Account* newAccount = new Account;
    newAccount->setPerson(fn,ln,mtn,ftn,db,mb,yb,mob,cn);
    if(head!=NULL)
    {
        if(current->getNext()!=NULL)
        {
            Account* temp = current->getNext();
            newAccount->setNext(temp);
            newAccount->setPrev(current);
            temp->setPrev(newAccount);
            current->setNext(newAccount);
        }
        else
        {
            newAccount->setNext(NULL);
            newAccount->setPrev(current);
            current->setNext(newAccount);
        }
    }
    else
    {
        newAccount->setNext(NULL);
        newAccount->setPrev(NULL);
        head=newAccount;
    }
    current=newAccount;
    size++;
}
void AccountList::printAccountDetails(Account* ac)
{
    cout<<"Name: "<<ac->getPersonFname()<<" "<<ac->getPersonLname()<<endl;
    cout<<"CNIC NO: "<<ac->getPersonCNIC();
    cout<<"Father Name: "<<ac->getPersonFatherName()<<endl;
    cout<<"Mother Name: "<<ac->getPersonMotherName()<<endl;
    cout<<"Number Of Existing Accounts: "<<ac->getNumberOfAccounts()<<endl;
    cout<<"Mobile Number: "<<ac->getPersonMobile()<<endl;
}
void AccountList::searchAccount()
{
    backLoop:
    string cn;
        cout<<"Enter The CNIC: ";
        cin>>cn;    
    
    
    Account*temp=head;
    while(temp->getPersonCNIC()!=cn)
    {
        temp=temp->getNext();
    }
    printAccountDetails(temp);
}
#endif