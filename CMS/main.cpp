//
//  main.cpp
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#include <iostream>
#include "Contact.h"
#include <fstream>
using namespace std;

int main()
{
    //testing C.M.S.
    Name name("Josh", "Nelson", "Keith");
    Address address("9908 N Willow Ave.", "MO", "64157");
    Contact myContact(name, address, "785-851-6299");
    
    return 0;
}
