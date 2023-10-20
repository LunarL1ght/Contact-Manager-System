//
//  ContactManager.cpp
//  Contact Sys
//
//  Created by Josh Nelson on 10/15/23.
//

#include <stdio.h>
#include "ContactManager.h"
#include <vector>
using namespace std;
#include <iostream>

ContactManager::ContactManager()
{
    vector<Contact> contacts;
}
//returns contact with matching ID

 Contact ContactManager::getContact(int id) //contact
{
    for (int i = 0; i < contacts.size(); i++)
    {
        if(contacts[i].getIdentifier() == id)
        {
            return contacts[i];
        }
    }
    Name n("","","");
    Address a("","","");
    Contact c(n, a, "");
    return c;
}
vector <Contact> ContactManager::getContacts(string l_name)
{
    vector <Contact> list;
    
    for (int i = 0; i < contacts.size(); i++)
    {
        if(contacts[i].getName().getlName() == l_name)
        {
            list.push_back(contacts[i]);
        }
    }
    return list;
}
void ContactManager::addContact()
{
    Contact con(Name(), Address(), "");
    cin >> con;
}
//FINISH LAST 3
void ContactManager::showContact() const
{
    for (int i = 0; i < contacts.size(); i++)
    {
        
    }
}
void ContactManager::saveContacts(const ostream& out)
{
    for (int i = 0; i < contacts.size(); i++)
    {
        string id  = to_string(contacts[i].getIdentifier());
        string str = contacts[i].getName().getfName() + "*" + contacts[i].getName().getmName()+ "*" +  contacts[i].getName().getlName()
        + "*" + contacts[i].getAddress().getStreetAddress() + "*" + contacts[i].getAddress().getState() + "*" + contacts[i].getAddress().getZip() + "*" + contacts[i].getPhone() + "*" + id;
    }
}
void ContactManager::loadContacts(istream& in)
{
    
}

