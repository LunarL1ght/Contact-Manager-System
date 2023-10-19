//
//  Name.h
//  Contact Sys 1
//
//  Created by Josh Nelson on 10/5/23.
//

#ifndef Name_h
#define Name_h
#include <string>
using namespace std;
#endif /* Name_h */

class Name
{
    public:
        string getfName();
        string getmName();
        string getlName();
        void setfName(string name);
        void setmName(string name);
        void setlName(string name);
    
    
        Name();
        Name(string fName, string lName, string mName);
        Name(Name &name);
    
        void showName();
    
        friend ostream& operator<<(ostream& out, Name& n);
        friend istream& operator>>(istream& out, Name& n);
    
    private:
        string last_name;
        string first_name;
        string middle_name;
};
