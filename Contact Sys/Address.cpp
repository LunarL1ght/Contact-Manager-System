//
//  Address.cpp
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#include <stdio.h>
#include "Address.h"
#include <iostream>

//intialization of object Address
Address::Address(string street, string st, string zp)
{
    streetAddress = street;
    state = st;
    zip = zp;
}

Address::Address()
{
    streetAddress = "";
    state = "";
    zip = "";
}

Address::Address(Address &addy)
{
    streetAddress = addy.getStreetAddress();
    state = addy.getState();
    zip = addy.getZip();
}

void Address::showAddress()
{
    cout << streetAddress << endl << state << "  " << zip << endl;
}
//overloader function for >> operator
istream& operator>>(istream& in, Address& a)
{
    cout << "Enter Street Address: ";
    in >> a.streetAddress;
    cout << "Enter State (Abbreviatation): ";
    in >> a.state;
    cout << "Enter Zip: ";
    in >> a.zip;
    return in;
}
//overloader function for << operator
ostream& operator<<(ostream& out, Address& a)
{
    out << a.getStreetAddress() << endl << a.getState() << "  " << a.getZip() << endl;
    return out;
}
//getter methods
string Address::getStreetAddress(){return streetAddress;}
string Address::getState(){return state;}
string Address::getZip(){return zip;};
//setter methods
void Address::setStreetAddress(string street){streetAddress = street;}
void Address::setState(string st){state = st;}
void Address::setZip(string zp){zip = zp;}
