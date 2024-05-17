/*This Is The Class Fooir The Authentication And Loginb Details Of The Person*/

#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H
#include<iostream>
using namespace std;
class Authentication{
    private:
    string username;
    string password;
    int pin;
    public:
    void setUsername(string un);
    void setPassword(string pw);
    void setPin(int pn);
    string getUsername();
    string getPassword();
    int getPin();
};
void Authentication::setUsername(string un)
{
    username=un;
}
void Authentication::setPassword(string pw)
{
    password=pw;
}
void Authentication::setPin(int pn)
{
    pin=pn;
}
string Authentication::getUsername()
{
    return username;
}
string Authentication::getPassword()
{
    return password;
}
int Authentication::getPin()
{
    return pin;
}
#endif