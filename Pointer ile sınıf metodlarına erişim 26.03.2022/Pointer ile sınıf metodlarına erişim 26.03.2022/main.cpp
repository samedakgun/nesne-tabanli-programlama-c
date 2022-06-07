#include<iostream>
using namespace std;

class Ogrenci{
private:
    string isim;
    int numara;
public:
    
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
    Ogrenci *ogr1=new Ogrenci();
    ogr1->setIsim("samed");
    ogr1->setNumara(3888);
    cout<<"isim:" <<ogr1->getIsim()<<endl<<"numara:"<<ogr1->getNumara();
    
    return 0;
}

