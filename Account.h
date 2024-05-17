/*This Class Will Act Ads Our Node And Will Contain All The Informatiopn In the Account*/
#include<iostream>
#include<fstream>
# include<ctime>
#include"Authentication.h"
#include"Person.h"
string getCurrentTimeAndDate() //https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
{
    // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   string dt = ctime(&now);
   return dt;
}

class Account{
    private:
    Person data;
    Authentication loginDetails;
    int NumbersOfAccount;
    int accountBalance; 
    public:
    Account();
    void Deposit(int dp);
	void Withdrawl(int wd);
	int getBalance();
	void AccountStatement();  

    Account* Next;
    Account* Prev;
    public:
    //Setters

    void setPerson(string fn,string ln,string mtn,string ftn,int db,int mb,int yb,string mob,string cn);
    void setLoginDetails(string un,string up,int pn);
    void setNext(Account* n);
    void setPrev(Account* p);
    //Getters
    string  getPersonFname();
    string getPersonLname();
    string getPersonMotherName();
    string getPersonFatherName();
    string getPersonMobile();
    string getPersonCNIC();

    string getPersonUsername();
    string getPersonPassword();
    string getFileName();
    int getPersonPin();
    int getNumberOfAccounts();
    Account* getNext();
    Account* getPrev();

};
//Setters

void Account::setPerson(string fn,string ln,string mtn,string ftn,int db,int mb,int yb,string mob,string cn)
{
    data.setFname(fn);
    data.setLname(ln);
    data.setMotherName(mtn);
    data.setFatherName(ftn);
    data.setDOB(db,mb,yb);
    data.setMobile(mob);
    data.setCNIC(cn);

}
void Account::setLoginDetails(string un,string up,int pn)
{
    loginDetails.setUsername(un);
    loginDetails.setPassword(up);
    loginDetails.setPin(pn);
}
void Account::setNext(Account* n)
{
    Next=n;
}
void Account::setPrev(Account* p)
{
    Prev=p;
}
//Getters
Account* Account::getNext()
{
    return Next;
}
Account* Account::getPrev()
{
    return Prev;
}
string Account::getPersonFname()
{
    return data.getFname();
}
string Account::getPersonLname()
{
    return data.getLname();
}
string Account::getPersonMotherName()
{
    return data.getMotherName();
}
string Account::getPersonFatherName()
{
    return data.getFatherName();
}

string Account::getPersonMobile()
{
    return data.getMobile();
}
string Account::getPersonCNIC()
{
    return data.getCNIC();
}
 string Account::getPersonUsername()
{
     return loginDetails.getUsername();
}
string Account::getPersonPassword()
{
    return loginDetails.getPassword();
}
int Account::getPersonPin() 
{
    return loginDetails.getPin();
}
string Account::getPersonMobile()
{
    return data.getMobile();
}
string Account::getPersonCNIC()
{
    return data.getCNIC();
}
int Account::getNumberOfAccounts()
{
    return NumbersOfAccount;
}

//Primary Functions
Account::Account()
{
    accountBalance =0;
}
void Account::Deposit(int dp)
{
    accountBalance = accountBalance+dp;
    cout<<"The Ammount you Have Deposited Is: "<<dp<<endl;
    ofstream file;
    
    file.open(getFileName().c_str(),ios::app|ios::out); //https://stackoverflow.com/a/42026179/14565490
    file<<"["<<getCurrentTimeAndDate()<<"]"<<"    "<<"Deposited: "<<dp<<"    "<<"New Balance: "<<accountBalance<<endl;
    file.close();
    
}
void Account::Withdrawl(int wd)
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
int Account::getBalance()
{
    return accountBalance;
}
void Account::AccountStatement()
{
    ifstream file;
    file.open(getFileName().c_str(),ios::in);
    string line;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
} 

