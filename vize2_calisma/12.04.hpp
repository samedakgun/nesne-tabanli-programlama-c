#ifndef _2_04_hpp
#define _2_04_hpp

#include <string>
#include <iostream>
using namespace std;
class rehber
{
public:
    explicit rehber();
    ~rehber();
    
private:
    int id;
    string number;
    string firstname;
    string lastname;
    string email;
    
    string isimdepo[5];
    string soyisimdepo[5];
    string telefondepo[5];
    string emaildepo[5];
public:
    
    void displayMessage();
    void addNewAccount();
    void deleteAccount();
    void listing();
    void search();
    void modify();
    void depo();
    
public:
    void setNumber();
    void setFirstName();
    void setLastName();
    void setEmail();
    void setid();
    
    int getid();
    string getNumber() const;
    string getFirstName()const;
    string getLastName()const;
    string getEmail()const;

    
    
};

#endif /* _2_04_hpp */
