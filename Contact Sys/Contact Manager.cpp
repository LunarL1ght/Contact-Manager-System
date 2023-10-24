//
//  Contact Manager.cpp
//  Contact Sys
//
//  Created by Josh Nelson on 10/24/23.
//

#include <stdio.h>
#include "ContactManager.h"
#include <iostream>
#include <vector>

ContactManager::ContactManager()
{
    vector <Contact> contacts;
}

Contact ContactManager::getContact(int id)
{
    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].getIdentifier() == id)
        {
            return contacts[i];
        }
    }
    Name n("","","");
    Address a("","","");

    return Contact (n, a, "");
}
//BIG ERROR RIGHT HERE
vector <Contact> ContactManager::getContact(string l_name)
{
    vector <Contact> list;
    
    for (int i = 0; i < contacts.size(); i++)
    {
        if (contacts[i].getName().getlName().compare(l_name) == 0)
        {
            //something with push back
            list.push_back(contacts[i]);
        }
    }
    
    return list;
}

void ContactManager::addContact()
{
    Name n("","","");
    Address a("","","");
    Contact c(n,a,"");
    cin >> c;
    //something with push back
    contacts.push_back(c);
}

void ContactManager::showContacts()
{
    for (int i = 0; i < contacts.size(); i++)
    {
        contacts[i].showContact();
    }
}
void ContactManager::saveContacts(const ostream& out)
{
    
}
void ContactManager::loadContacts(istream& in)
{
    
}
