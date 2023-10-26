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
void ContactManager::saveContacts(ostream& out)
{
    for(int i = 0; i < contacts.size(); i++)
    {
        out << contacts[i].getName().getfName();
    }
    
}
void ContactManager::loadContacts(istream& in)
{
    string l_name;
    string f_name;
    string m_name;
    string address;
    string state;
    string zip;
    string number;
    
    
    for (int i = 0; i < contacts.size(); i++)
    {
        in >> l_name >> f_name >> m_name >> address >> state >> zip >> number;
        Contact c(l_name, f_name, m_name, address, state, zip, number);
        
        if (c.getIdentifier() == 0)
        {
            c.setIdentifier();
        }
        contacts.push_back(c);
        
        
        
    }
    
}
