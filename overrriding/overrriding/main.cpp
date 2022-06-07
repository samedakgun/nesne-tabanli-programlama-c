#include<iostream>
#include<string.h>
using namespace std;

class Kitap
{
public:
    string isim;
public:
    void bilgileriSoyle()
    {
        cout<<isim<<endl;
    }
    
};
class Roman:public Kitap
{
public:
    string romanTipi;
public:
    Roman(string isim,string romanTipi)
    {
        this->isim=isim;
        this->romanTipi=romanTipi;
    }
    void bilgileriSoyle()
    {
        cout<<"Roman ismi: "<<isim<<" Roman tipi: "<<romanTipi<<endl;
    }
    
};


int main()
{
    Roman r1("sefiller","hikaye");
    r1.bilgileriSoyle();
    r1.Kitap::bilgileriSoyle();
    return 0;
}
