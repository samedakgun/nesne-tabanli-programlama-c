#include<string.h>
#include <iostream>
#include "Urun.h"
#include <iomanip>
using namespace std;
Urun::Urun(int _id,string _urunname,int _stok, float _fiyat)
{
    setid();
    _id=this->id;
    
    seturunName();
    _urunname=this->urunName;
    
    setstok();
  _stok=  this->stok;
    
    setfiyat();
    _fiyat=this->fiyat;
  
}
ostream &operator<<( ostream &output, const Urun &urun )
{
   output <<urun.id<<endl<<urun.urunName<<endl<<urun.stok<<endl<<urun.fiyat;
   return output;
}
void Urun::setid()
{
    int _id=0;
    cout<<"Enter id(from 1 to 10): ";
    cin>>_id;
    id=_id;
    cout<<endl;
}
void Urun::seturunName()
{
    string _UrunName="";
    
    do
    {
        cout<<"Enter urun name: ";
        cin>>_UrunName;
        
    }
    while(_UrunName.size()<3);
    cout<<endl;
    urunName=_UrunName;
}
void Urun::setstok()
{
    int _stok=0;
    cout<<"Enter stok ";
    cin>>_stok;
    stok=_stok;
    cout<<endl;
}
void Urun::setfiyat()
{
    int _fiyat=0;
    cout<<"Enter stok ";
    cin>>_fiyat;
    fiyat=_fiyat;
    cout<<endl;
   
}

int  Urun::getid() const
{
    return id;
}
string Urun::geturunName()const
{
    return urunName;
}
int Urun::getStok() const
{
    return stok;
}
float Urun::getFiyat() const
{
    return fiyat;
}


int main()
{
    Urun **urunlar=new Urun*[100];
    int x;
    cout<<"Please Enter id(from 1 to 10): ";
    cin>>x;
    while (!cin.good())
    {
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout<<"Please Enter id:";
        int x;
        cin>>x;
    }
   
    
    urunlar[x]= new Urun(x,"NULL",0,0);
    
    return 0;
}
