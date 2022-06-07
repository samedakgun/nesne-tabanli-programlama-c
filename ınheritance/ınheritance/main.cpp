#include<iostream>
#include<string.h>
using namespace std;

class takim
{
public:
    string isim;
    int kurulusYili;
    void yazdir()
    {
        cout<<"Takım sınıfı"<<endl;
    };
    
};

class futbolcu:public takim
{
public:
    string isim;
    int dogumYili;
    int maas;
public:
    void setisim()
    {
        cout<<"enter name: ";
        cin>>isim;
        this->isim=isim;
    }
    string getisim()
    {
        return isim;
    }
   
    
};
int main()
{
    futbolcu f1;
    f1.setisim();
    takim *f1takim;
    f1takim=&f1;
    f1takim->isim="trabzonspor";
    f1.dogumYili=1996;
    f1.maas=2000000;
    cout<<f1.getisim();
    return 0;
}
