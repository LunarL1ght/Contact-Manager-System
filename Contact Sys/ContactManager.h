//
//  ContactManager.h
//  Contact Sys
//
//  Created by Josh Nelson on 10/15/23.
//

#ifndef ContactManager_h
#define ContactManager_h

#include <vector>
#endif /* ContactManager_h */

#include "Contact.h"
using namespace std;
#include <string>

class ContactManager
{
    
public:
    ContactManager();
    Contact getContact(int id);
    vector<Contact> getContacts(string l_name);
    void addContact();
    void showContact() const;
    void saveContacts(const ostream& out);
    void loadContacts(istream& in);
private:
    vector <Contact> contacts;
};
