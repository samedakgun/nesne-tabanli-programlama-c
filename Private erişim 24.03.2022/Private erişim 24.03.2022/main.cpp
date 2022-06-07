#include<iostream>
using namespace std;

class Ogrenci
{
    //görünmez yapar
private:
    string isim;
    string bolum;
    
    
};

int main()
{
    Ogrenci ogr1;
    
    ogr1.isim="samed";
    
    ogr1.bolum="bilgisayar";
    
    cout<<ogr1.isim<<" "<<ogr1.bolum;
    return 0;
}
