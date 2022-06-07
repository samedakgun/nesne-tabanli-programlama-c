#include<iostream>
using namespace std;
class Insan{
public:
    string isim;
    string soyisim;
    string gozRengi;
    int yas;
    
    void isimVeyasSoyle()//metod->fiilerin yapıldığı yer (söylemek yapılan şey burda);
    {
        cout<<isim<<"  "<<yas<<endl;
    };
    
};


int main()
{
    Insan insan1;
    Insan insan2;
    
    insan2.isim="mert";
    insan2.gozRengi="sarı";
    
    insan1.isim="samed";
    insan1.yas=21;
    insan1.isimVeyasSoyle();
   
    return 0;
}
