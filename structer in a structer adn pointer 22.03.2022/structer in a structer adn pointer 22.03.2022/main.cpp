#include<iostream>
using namespace std;


struct Kategori{
    string isim;
    int urunadeti;
};


struct Reyonlar
{
    string isim;
    bool acikmi;
    int urunsayisi;
    Kategori kategoriler;
    
};

void stoktanDus(Reyonlar *reyon,int satılanMiktar)
{
    reyon->urunsayisi= reyon->urunsayisi-satılanMiktar;
    reyon->kategoriler.urunadeti -= satılanMiktar;
};


int main()
{
    Reyonlar r1={"Kuru Gıda",1,300,{"Makarna",130}};
    cout<<r1.isim<<" "<<r1.acikmi<<" "<<r1.urunsayisi<<" "<<r1.kategoriler.isim<<" "<<r1.kategoriler.urunadeti<<endl;
    
    stoktanDus(&r1,30);
    cout<<r1.isim<<" "<<r1.acikmi<<" "<<r1.urunsayisi<<" "<<r1.kategoriler.isim<<" "<<r1.kategoriler.urunadeti;
    return 0;
}
