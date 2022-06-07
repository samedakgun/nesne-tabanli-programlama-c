#include "music.hpp"
#include<iostream>
#include<stdio.h>
using namespace std;

music::music()
{
    
};

music::setName()
{
    string SETNAME="";
    cout<<"enter music name: ";
    cin>> SETNAME;
    name=SETNAME;
};
music::setTur()
{
    string SetTur="";
    cout<<"enter music tur: ";
    cin>> SetTur;
    tur=SetTur;
};
music::setFiyat()
{
    float SetFiyat=0;
    cout<<"enter music fiyat: ";
    cin>> SetFiyat;
    fiyat=SetFiyat;
}
music::getName()
{
    return name;
}
music::getTur()

int main()
{
   
    
    return 0;
}
