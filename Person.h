
/*This Is The Class To Store The Basic Information Of A Person*/
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;
class Person{
	private:
		string fname;
		string lname;
		string motherName;
		string fatherName;
		int d,m,y;

		string mobile;
		string cnic;
		
	public:
		void setFname(string fn);

		void setLname(string ln);
		void setMotherName(string mtn);
		void setFatherName(string ftn);

     void setMobile(string mb);
        void setCNIC(string cn);
		void setDOB(int db,int mb,int yb);
		void getDOB();

		string  getFname();
		string getLname();
		string getMotherName();
		string getFatherName();
        string getMobile();
       	string getCNIC();
		string getFileName();
		
}; 
#endif
void Person::setDOB(int db,int mb,int yb)
{
	d=db;
	m=mb;
	y=yb;
}
void Person::getDOB()
{
	cout<<d<<"-"<<m<<"-"<<y<<endl;
}
void Person::setFname(string fn)
{
	fname=fn;
}

void Person::setLname(string ln)
{
	lname=ln;
}
void Person::setMotherName(string mtn)
{
	motherName=mtn;
}
void Person::setFatherName(string ftn)
{
	fatherName=ftn;
}

void Person::setMobile(string mb)
{
	mobile=mb;
}
void Person::setCNIC(string cn)
{
	cnic=cn;
}
string Person:: getFname()
{
	return fname;
}
string Person:: getLname()
{
	return lname;
}
string Person::getMotherName()
{
	return motherName;
}
string Person::getFatherName()
{
	return fatherName;
}
string Person::getMobile()
{
	return mobile;
}
string Person::getCNIC()
{
	return cnic;
}
string Person::getFileName()
{
	
	const string filename=getCNIC()+".txt";
	return filename;
}