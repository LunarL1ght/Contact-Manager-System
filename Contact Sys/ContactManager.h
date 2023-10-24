//
//  ContactManager.h
//  Contact Sys
//
//  Created by Josh Nelson on 10/24/23.
//

#ifndef ContactManager_h
#define ContactManager_h
#include "Contact.h"
#include <vector>

#endif /* ContactManager_h */

class ContactManager
{
public:
    ContactManager();
    Contact getContact(int id);
    vector <Contact> getContact(string l_name);
    void addContact();
    void showContacts();
    void saveContacts(const ostream& out);
    void loadContacts(istream& in);
    
private:
    vector <Contact> contacts;
    
    
};
