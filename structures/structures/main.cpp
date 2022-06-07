#include<string>
#include <iostream>
using namespace std;

struct Ogrenci
{
    int numara;
    string isim;
};

void ismiDegistir(Ogrenci *ismideğiştirilecekogrenci,string yenisim)
{
    ismideğiştirilecekogrenci->isim=yenisim;
}
int main() {
    Ogrenci ogr1;
    ogr1.isim="samed";
    cout<<ogr1.isim<<endl;
    ismiDegistir(&ogr1,"sammme");
    cout<<ogr1.isim<<endl;
    
   
    return 0;
}
