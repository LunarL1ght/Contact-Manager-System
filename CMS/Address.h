//
//  Address.h
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#ifndef Address_h
#define Address_h
#include <string>
using namespace std;
#endif /* Address_h */

class Address
{
public:
    Address(string street, string st, string zp);
    Address();
    Address(Address & addy);
    
    void showAddress();
    
    string getStreetAddress();
    string getState();
    string getZip();
    
    void setStreetAddress(string street);
    void setState(string st);
    void setZip(string zp);
    
    friend ostream& operator<<(ostream& out, Address& a);
    friend istream& operator>>(istream& out, Address& a);
    
    
private:
    string streetAddress;
    string state;
    string zip;
};

