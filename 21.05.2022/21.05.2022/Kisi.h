#include <string.h>
#include<iostream>
#include"PhoneNumber.h"
#ifndef Kisi_h
#define Kisi_h
using namespace std;
class Kisi
{
public:
    friend ostream &operator<<( ostream &output, const Kisi &profil );
    
    explicit Kisi(int _id,string _firstname,string _lastname, string _number,string _email);
    ~Kisi();
private:
    int id;
    string number=" ";
    string firstname=" Null";
    string lastname=" Null";
    string email="Null";
    string erray[10][4];
    
public:
    
    void displayMessage();
    void deleteAccount();
    void listing();
    void search();
    void modify();
    void depo();
    
public:
    void setid();
    void setNumber();
    void setFirstName();
    void setLastName();
    void setEmail();
    
    int getid() const;
    string getNumber() const;
    string getFirstName()const;
    string getLastName()const;
    string getEmail()const;

};

#endif /* Kisi_h */
