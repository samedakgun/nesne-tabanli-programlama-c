#ifndef REHBER_hpp
#define REHBER_hpp

#include <string>
#include <iostream>
using namespace std;
class rehber
{
public:
    explicit rehber();
    ~rehber();
    
private:
    
    string number;
    string firstname;
    string lastname;
    string email;
    
    
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
    
    
    string getNumber() const;
    string getFirstName()const;
    string getLastName()const;
    string getEmail()const;

    
    friend ostream &operator<<( ostream &output, const rehber &Kisi );
    friend istream &operator>>( istream &input, rehber &Kisi );
private:
    string _number;
    string _firstname;
    string _lastname;
    string _email;
public:
    void Kisi(string isim,string soyisim,string numara,string email);
    
};
class Kisi
{
    

};


#endif /* _2_04_hpp */
