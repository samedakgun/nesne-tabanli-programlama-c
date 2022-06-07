#include<iostream>
using namespace std;

class Ogrenci{
private:
    string isim;
    int numara;
public:
    
    Ogrenci(string yazilacakIsim, int yazilacakNumara)
    {
        isim=yazilacakIsim;
        numara=yazilacakNumara;
    }
    
    void setIsim(string yazilacakIsim)
    {
        if(yazilacakIsim.size()>=3)
        {
            isim=yazilacakIsim;
        }
        else{
            cout<<"yazılacak isim 3en az 3 harf içermeli";
        }
        
    }
    void setNumara(int yazilacakNumara)
    {
        numara=yazilacakNumara;
    }
    
    string getIsim()
    {
        
        return isim;
    }
    int getNumara()
    {
        return numara;
    }
};

int main()
{
    Ogrenci ogr1("samed",1234);
    
    cout<<"isim: "<<ogr1.getIsim()<<" numara: "<<ogr1.getNumara();
    
    
    return 0;
}

