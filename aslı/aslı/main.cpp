#include<iostream>
#include <string>
#include"Book.h"
using namespace std;
Book::Book()
{
    setbookId();
    cout<<endl;
    setbookName();
    cout<<endl;
    setauthorName();
    cout<<endl;
    displayMessage();
}
Book::~Book()
{
    
}
ostream &operator<<( ostream &output, const Book &kitap )
{
    output << kitap.bookid<<endl<<kitap.bookName<<endl<<kitap.authorName;
    return output;
    
}


void Book::setbookId()
{
    int _id=0;
    cout<<"enter id: ";
    cin>>_id;
    bookid=_id;
    libraryid[count1]=_id;
    count1=count1+1;
}
void Book::setbookName()
{
    
    string _bookName=" ";
    cout<<"enter book name: ";
    cin>>_bookName;
    bookName=_bookName;
    libraryisim[count2]=_bookName;
    count2=count2+1;
}
void Book::setauthorName()
{
    string _authorName=" ";
    cout<<"enter author name: ";
    cin>>_authorName;
    authorName=_authorName;
    libraryauthor[count3]=_authorName;
    count3=count3+1;
}

int Book::getbookId() const
{
    return bookid;
}
string Book::getbookName() const
{
    return bookName;
}
string Book::getauthorName()const
{
    return authorName;
}

void Book::insert()
{
    fflush(stdin);
    setbookId();
    
    
    setbookName();
   
    
    setauthorName();
   
}
void Book::listing()
{
           /* cout<<"----listing---";
            cout<<getbookId()<<endl;
            cout<<string(getbookName())<<endl;
            cout<<string(getauthorName())<<endl;*/
    for (int i=0; i<=count1; i++)
    {
        cout<<"--------------"<<i<<endl;
        cout<<libraryid[i]<<endl;
        cout<<libraryisim[i]<<endl;
        cout<<libraryauthor[i]<<endl;
    }
}
void Book::sil()
{
    int h=0;
    cout<<"enter book id: ";
    cin>>a;
    libraryid[h+1]=0;
    libraryisim[h+1]=" ";
    libraryauthor[h+1]=" ";
    
}
void Book::displayMessage()
{
    cout<<"1-insert new book"<<endl;
    cout<<"2-deletebook"<<endl;
    cout<<"3-modify book"<<endl;
    cout<<"4- listing book"<<endl;
    cout<<"5-if you want to exit"<<endl;
    cout<<endl<<endl;
    
}
void Book::modify()
{
    int g;
    string isim2;
    string yazar2;
    cout<<"enter book id: ";
    cin>>g;
    cout<<"enter name: ";
    cin>>isim2;
    libraryisim[g-1]=isim2;
    cout<<"enter author name";
    cin>>yazar2;
    libraryauthor[g-1]=yazar2;
    
}

int main()
{
    Book book1;
 while(1)
 {
     
     int t;
     cin>>t;
     if (t==1)
     {
         book1.insert();
         book1.displayMessage();
     }
     else if (t==2)
     {
         book1.sil();
         book1.displayMessage();
     }
     else if(t==3)
     {
         book1.modify();
         book1.displayMessage();
     }
     else if(t==4)
     {
         book1.listing();
         book1.displayMessage();
     }
     else if(t==5)
     {
         break;
     }
     else
     {
         cout<<"hatalı tercih yaptınız"<<endl;
         break;
     }
     
 }
    
    return 0;
}
