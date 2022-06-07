#include <iostream>
#include<string>
#include"Student.h"
#ifndef Book_h
#define Book_h
using namespace std;

class Book
{
public:
    friend ostream &operator<<( ostream &output, const Book &kitap );
    explicit Book();
    ~Book();
    
private:
    int bookid;
    string bookName;
    string authorName;
    string libraryisim[100];
    int libraryid[100];
    string libraryauthor[100];
    
    
public:
    int a=0;
    int b=0;
    int c=0;
    int count1=0;
    int count2=0;
    int count3=0;
    void setbookId();
    void setbookName();
    void setauthorName();
    
    int getbookId()const;
    string getbookName()const;
    string getauthorName()const;
    

    void listing();
    void modify();
    void insert();
    void sil();
    void displayMessage();
    
    
    
};

#endif /* Book_h */
