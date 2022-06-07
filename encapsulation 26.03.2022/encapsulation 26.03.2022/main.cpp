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
    Ogrenci Ogr1;
    
    Ogr1.setIsim("ss");
    Ogr1.setNumara(233);
    cout<< "İsim:"<<Ogr1.getIsim()<<endl<<"Numara:"<<Ogr1.getNumara();
    return 0;
}
