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
//FINISH BELOW  -> ID IMPLEMENTATION???
/*
void ContactManager::getContact(int id) //contact
{
    
}
 */


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
void ContactManager::showContact() const
{
}

