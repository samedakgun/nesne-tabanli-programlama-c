#include<string.h>
#include<iostream>
#ifndef Urun_h
#define Urun_h
using namespace std;

class Urun
{
public:
public:
    friend ostream &operator<<( ostream &output, const Urun &urun );
    
    explicit Urun(int _id,string _urunname,int _stok, float _fiyat);
    ~Urun();
private:
    int id;
    string urunName=" Null";
    int stok=0;
    float fiyat=0;
    
public:
    
    void displayMessage();
    void deleteAccount();
    void listing();
    void modify();
    void depo();
    
public:
    void setid();
    void seturunName();
    void setstok();
    void setfiyat();
    
    int getid() const;
    string geturunName() const;
    int getStok() const;
    float getFiyat()const;

};

#endif /* Urun_h */
