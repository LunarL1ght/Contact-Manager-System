//
//  Contact.h
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#ifndef Contact_h
#define Contact_h

#include<string>
#include "Name.h"
#include "Address.h"
using namespace std;
#endif /* Contact_h */

class Contact
{
public:
    Contact(Name n, Address a, string num);
    Contact(string f, string l, string m, string ad, string st, string zip, string num);
    Contact(Contact &c);
    
    void showContact();
    
    Name getName();
    void setName(Name n);
    
    Address getAddress();
    void setAddress(Address addy);
    
    string getPhone();
    void setPhone(string num);
    
    int getIdentifier();
    
    friend ostream& operator<<(ostream& out, Contact& c);
    friend istream& operator>>(istream& in, Contact& c);
    
    static int totalCt;
private:
    string phone;
    Name name;
    Address address;
    int identifier;
    
    void setIdentifier();
    
};
