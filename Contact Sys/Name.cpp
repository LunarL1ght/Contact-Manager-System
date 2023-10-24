//
//  Name.cpp
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#include <stdio.h>
#include "Name.h"
#include <iostream>
using namespace std;
//intialization of object Name
Name::Name()
{
    first_name = "";
    middle_name = "";
    last_name = "";
}
Name::Name(string fName, string lName, string mName)
{
    first_name = fName;
    middle_name = mName;
    last_name = lName;
}

Name::Name(Name &name)
{
    first_name = name.getfName();
    middle_name = name.getmName();
    last_name = name.getlName();
}
//overloader function for >> operator
istream& operator>>(istream& in, Name& n)
{
    
    string str;
    cout << "First Name: ";
    in >> n.first_name;


    cout << "Last Name: ";
    in >> n.last_name;


    cout << "Middle Name: ";
    in >> n.middle_name;

    return in;
}
//overloader function for << operator
ostream &operator<<(ostream& out, Name& n)
{
    out << n.last_name << ", " << n.first_name << " " << n.middle_name.substr(0,1) << "." << endl;
    return out;
}

//getter methods
string Name::getfName(){return first_name;}
string Name::getmName(){return middle_name;}
string Name::getlName(){return last_name;}
//setter methods
void Name::setfName(string name){first_name = name;}
void Name::setmName(string name){middle_name = name;}
void Name::setlName(string name){last_name = name;}
//show name
void Name::showName()
{
    cout << last_name << ", " << first_name << " " << middle_name.substr(0,1) << "." << endl;
}



