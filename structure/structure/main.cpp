#include<iostream>
using namespace std;
struct Ogrenci{
    int numara;
    string isim;
    string soyisim;
    string bolum;
    char cinsiyet;
    
};

int main()
{
    Ogrenci ogr1 ={123221,"samed","akgun","bilgisayar muhendisligi",'E'};
    Ogrenci ogr2;
    cout<<ogr1.numara<< " "<<ogr1.isim<<" "<<ogr1.bolum<<" "<<ogr1.cinsiyet;
    cout<<endl<<"2. ogrencinin bilgilerini giriniz"<<endl;
    cin>>ogr2.numara>>ogr2.isim>>ogr2.soyisim>>ogr2.bolum>>ogr2.cinsiyet;
    cout<<ogr2.numara<< " "<<ogr2.isim<<" "<<ogr2.bolum<<" "<<ogr2.cinsiyet;
    cout<<"2. ogrencinin bilgilerini giriniz";
    return 0;
}
