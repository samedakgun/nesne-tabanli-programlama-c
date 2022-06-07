#ifndef music_hpp
#define music_hpp

#include<stdio.h>
#include<iostream>
using namespace std;
class music{
private:
    string name;
    string tur;
    float fiyat;
    
public:
    explicit music();
    ~music();
    void setName();
    void setTur();
    void setFiyat();
    
    
    string getName() const;
    
    string getTur() const
    {
        return tur;
    }
    float getFiyat()const
    {
        return fiyat;
    }
    
    
};

#endif
