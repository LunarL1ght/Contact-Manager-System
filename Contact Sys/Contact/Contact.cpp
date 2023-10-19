//
//  Contact.cpp
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#include <stdio.h>
#include <iostream>
#include "Contact.h"
using namespace std;
//intialization of object Contact
Contact::Contact(Name n, Address a, string num)
{
    name = n;
    address = a;
    phone = num;
}
Contact::Contact(string f, string l, string m, string ad, string st, string zip, string num)
{
    name = Name(f, l, m);
    address = Address(ad, st, zip);
    phone = num;
}
Contact::Contact(Contact &c)
{
    name = c.getName();
    address = c.getAddress();
    phone = c.getPhone();
}
void Contact::showContact()
{
    name.showName();
    address.showAddress();
    cout << phone << endl;
}
//overloader function for >> operator
istream& operator>>(istream& in, Contact& c)
{
    in >> c.name;
    
    in >> c.address;
    
    cout << "Enter Phone: ";
    in >> c.phone;
    return in;
}
//overloader function for << operator
ostream& operator<<(ostream& out, Contact& c)
{
    out << c.getName().getlName() << ", " << c.getName().getfName() << " " << c.getName().getmName().substr(0,1) << "." << endl << c.getAddress().getStreetAddress() << endl << c.getAddress().getState() << "  " << c.getAddress().getZip() << endl << c.getPhone() << endl << endl;
    return out;
}
//getter and setter methods
string Contact::getPhone(){return phone;}
void Contact::setPhone(string num){phone = num;}

Name Contact::getName(){return name;}
void Contact::setName(Name n){name = n;}

Address Contact::getAddress(){return address;}
void Contact::setAddress(Address addy){address = addy;}

int Contact::totalCt = 0;

void Contact::setIdentifier()
{
    totalCt++;
    identifier = totalCt;
}

