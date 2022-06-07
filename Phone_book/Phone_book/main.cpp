#include <iostream>
using namespace std;

struct Directory
{
    string name;
    string surname;
    string homeNumber;
    string telephoneNumber;
    struct adress ;
    struct birthDay ;
  
};
struct adress{
    string province;
    string  neighbordhood;
    string  street;
    int  doorNumber;
    string  eposta;
    
};
struct birthDay
{
    int day;
    int month;
    int year;
};

void insertNewAccount(struct Directory );//KİŞİ EKLEME FONKSİYONU.



int main()
{
 
    
    return 0;
}
/*
 
 void kisiEkle(struct Rehber KisiBilgileri[BUFSIZ])
 {
     printf("Lutfen Kisi Bilgilerini Kucuk Harflerle Giriniz\n");
     printf("ISIM         \t: ");
     flushall();
     gets(KisiBilgileri[N].Isim);
     printf("SOYISIM      \t: ");
     flushall();
     gets(KisiBilgileri[N].Soyad);
     printf("EV  TEL NO   \t: ");
     flushall();
     gets(KisiBilgileri[N].evtelefonu);
     printf("CEP TEL NO   \t: ");
     flushall();
     gets(KisiBilgileri[N].ceptelefonu);
     printf("IS TEL NO   \t: ");
     flushall();
     gets(KisiBilgileri[N].istelefonu);
     printf("IL   \t: ");
     flushall();
     gets(KisiBilgileri[N].adresler.il);
     printf("MAHALLE   \t: ");
     flushall();
     gets(KisiBilgileri[N].adresler.mahalle);
     printf("SOKAK   \t: ");
     flushall();
     gets(KisiBilgileri[N].adresler.sokak);
     printf("NUMARA  \t: ");
     flushall();
     gets(KisiBilgileri[N].adresler.numara);
     printf("E-POSTA ADRESI   \t: ");
     flushall();
     gets(KisiBilgileri[N].adresler.epostaadresi);
     printf("Dogum tarihi gun   \t: ");
     flushall();
     gets(KisiBilgileri[N].dogum.gun);
     printf("Dogum tarihi ay   \t: ");
     flushall();
     gets(KisiBilgileri[N].dogum.ay);
     printf("Dogum tarihi yil   \t: ");
     flushall();
     gets(KisiBilgileri[N].dogum.yil);
  
     N++;
 }
 */
