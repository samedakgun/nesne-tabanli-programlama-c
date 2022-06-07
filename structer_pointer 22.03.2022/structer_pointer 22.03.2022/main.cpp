#include<iostream>

using namespace std;

struct Ogrenci{
    int numara;
    string isim;
};
void ismiDegistir(Ogrenci* ismiDegistirilicekOgrenci, string koyulacakIsim)
{
    ismiDegistirilicekOgrenci->isim=koyulacakIsim;
}
void ogrenciOlustur(Ogrenci* yeniOgrenci,int numara,string yeniOgrenciIsmi)
{
    cout<<"lutfen yeni ogrencinin ismini giriniz: ";
    cin>>yeniOgrenci->isim;
    cout<<endl;
    cout<<"lutfen yeni ogrencinin numarasını giriniz: ";
    cin>>yeniOgrenci->numara;
    
    cout<<"Ogrencinin ismi: "<<yeniOgrenci->isim<<endl<<"yeni ogrencinin numarası: "<<yeniOgrenci->numara;
}

void ogrenciSil(Ogrenci *ogr)
{
    
}

int main()
{
    Ogrenci ogr1;
    Ogrenci ogr2;
    ogr1.isim ="samed";
    
    //cout<<ogr1.isim<<endl;
    //ismiDegistir(&ogr1, "ahmet");
    //cout<<ogr1.isim<<endl;
    
    ogrenciOlustur(&ogr2,12,"aa");
    
    
    
    return 0;
}
