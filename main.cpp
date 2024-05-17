#include<iostream>
#include<fstream>
#include<string>
#include"Costumer.h"
// #include"Administrator.h"
#include"AccountList.h"

using namespace std;
int main()
{

AccountList a ;
    loop:
   int ch1;
   cout<<"\t\t--**--**--**--**--**--**Welcome to The Bank Management System**--**--**--**--**--**--**--"<<endl;
   cout<<"\t\tChoose From The Following: \n\t\t1-Costumer\n\t\t2-Administrator"<<endl;
   cout<<"\t\tEnter Your Choice(1,2): ";
   cin>>ch1;
   while (ch1<1 || ch1>2)
   {
       cout<<"\t\t-----*INVALID INPUT------"<<endl;
       cout<<"\t\tRe-enter The Correct Value(1,2): ";
       cin>>ch1;
   }
   if(ch1 == 1)
   {
       int ch2;
       cout<<"\t\t1. New Coustumer                   2.Sign In"<<endl;
       cout<<"\t\tEnter Your Choice(1,2): ";
       cin>>ch2;
       while (ch2<1 || ch2>2)
       {
       cout<<"\t\t-----*INVALID INPUT------"<<endl;
       cout<<"\t\tRe-enter The Correct Value(1,2): ";
       cin>>ch2;
       }
       if(ch2 == 1)
       {
           string fname,lname,mother,father,cnic,mobile;
           int d,m,y;
           cout<<"\t\t******ACCOUNT OPENNING APPLICATION******"<<endl;
           cin.ignore();
           cout<<"\t\tEnter Your First Name: ";
           getline(cin,fname);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cin.ignore();
           cout<<"\t\tEnter Your Last Name: ";
           getline(cin,lname);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cin.ignore();
           dobd:
           cout<<"Enter Your Date Of Birth(DD-MM-YYYY)\n ";
           cout<<"Date(DD): ";
           cin>>d;
           if(d<1 || d>31)
           {
               cout<<"INVALID INPUT!"<<endl;
               cout<<"Date Must Be Less Than 31"<<endl;
               goto dobd;
           }
           else
           {
               dobm:
               cout<<"Month(MM): ";
               cin>>m;
               if(m<1 || m>12)
               {    
                   cout<<"INVALID INPUT!"<<endl;
                   cout<<"Month Must Be Less Than 12"<<endl;
                   goto dobm;
               }
               else
               {
                   doby:
                   cout<<"Year(YYYY): ";
                   cin>>y;
                   if(y<1950 || y>2021)
                   {
                       cout<<"INVALID INPUT!"<<endl;
                       cout<<"Year Must Be Greater Than 1950 And Less Than 2021"<<endl;
                       goto doby;
                   }
                          
               }
           }

           cin.ignore();
           cout<<"\t\tEnter Your Mother Name: ";
           getline(cin,mother);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cin.ignore();
           cout<<"\t\tEnter Your Father Name: ";
           getline(cin,father);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cin.ignore();
           cout<<"\t\tEnter Your CNIC Number: ";
           getline(cin,cnic);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cin.ignore();
           cout<<"\t\tEnter Your Mobile Number: ";
           getline(cin,mobile);
           cout<<"\t\tEnter A Key To Continue-----"<<endl;
           cout<<"\t\t*****APPLICATION SUBMITED*****"<<endl;
           ofstream Outfile;
           Outfile.open("Account Application.txt");
           Outfile<<"Name: "<<fname<<" "<<lname<<endl;
           Outfile<<"Date Of Birth: "<<d<<"/"<<m<<"/"<<y<<endl;
           Outfile<<"Father Name : "<<father<<endl;
           Outfile<<"Mother Name : "<<mother<<endl;
           Outfile<<"CNIC : "<<cnic<<endl;
           Outfile<<"Mobile Number : "<<mobile<<endl;
           Outfile<<"\t\t---------------------------------------"<<endl;
           cout<<"\t\tYou Will Be Notified After Your Account Is Created"<<endl;
           cout<<"\t\t---------------------------------------"<<endl;
           cout<<"\t\tEnter Any Key To Continue-----"<<endl;
           cin.ignore();
           system("CLS");
           goto loop;          
       }
       else
       {

       }
   }
   else
   {
      
   }
}


