#include<iostream>
#include<stdio.h>
#include <string>
#include <iomanip>
#include "Kisi.h"
#include "PhoneNumber.h"

using namespace std;
Kisi::Kisi(int _id,string _firstname,string _lastname, string _number,string _email)
{
    /*setid();
    _id=this->id;*/
    
    setFirstName();
    _firstname=this ->firstname;
    
    setLastName();
    _lastname=this->lastname;
    
    setNumber();
  _number=  this->number;
    
    setEmail();
    _email=this->email;
  
}
Kisi::~Kisi()
{
    cout<<getFirstName()<<"Account is deleted";
    firstname=" ";
    lastname=" ";
    number=" ";
    email=" ";
}
ostream &operator<<( ostream &output, const Kisi &profil )
{
   output << profil.firstname<<endl<<profil.lastname<<endl<<profil.number;
   return output;
}
ostream &operator<<( ostream &output, const PhoneNumber &number2 )
{
   output << number2.areaCode<< number2.exchange << number2.line;
   return output;
}


istream &operator>>( istream &input, PhoneNumber &number2 )
{
   input.ignore(); // skip (
   input >> setw( 3 ) >> number2.areaCode; // input area code
   input.ignore( 2 ); // skip ) and space
   input >> setw( 3 ) >> number2.exchange; // input exchange
   input.ignore(); // skip dash (-)
   input >> setw( 4 ) >> number2.line; // input line
   return input; // enables cin >> a >> b >> c;
}

void Kisi::setid()
{
    int _id=0;
    cout<<"Enter id(from 1 to 10): ";
    cin>>_id;
    id=_id;
    cout<<endl;
}
void Kisi::setFirstName()
{
    string _FirstName="";
    
    do
    {
        cout<<"Enter first name: ";
        cin>>_FirstName;
        
    }
    while(_FirstName.size()<3);
    cout<<endl;
    firstname=_FirstName;
}
void Kisi::setLastName()
{
    string _LastName="";
    
    do
    {
        cout<<"Enter last name: ";
        cin>>_LastName;
        
        
    }
    while(_LastName.size()<2);
    cout<<endl;
    lastname=_LastName;
}
void Kisi::setNumber()
{
    string _Number="";
    
    do
    {
        cout<<"Enter telephone number: ";
        cin>>_Number;
        
    }
    while(_Number.size()<10);
    cout<<endl;
        number=_Number;
   
    
    

  
}
void Kisi::setEmail()
{
    string _Email="";
    
    cout<<"Enter email: ";
    cin>>_Email;
    cout<<endl;
        
    email=_Email;
}

int  Kisi::getid() const
{
    
    return id;
}
string Kisi::getFirstName()const
{
    return firstname;
}
string Kisi::getLastName() const
{
    return lastname;
}
string Kisi::getNumber() const
{
    return number;
}
string Kisi::getEmail() const
{
    return email;
}

void Kisi::displayMessage()
{
    cout<<endl;
    cout<<"        1st option delete"<<endl;
    cout<<"        2nd option listing"<<endl;
    cout<<"        3rd option search"<<endl;
    cout<<"        4th option modify"<<endl;
    cout<<"        5th option add account"<<endl;
    cout<<"        6th option exit"<<endl;
    cout<<"        Enter your seleciton:  "<<endl;
    /*cout<<"press zero to exit"<<endl<<endl;*/
    cout<<endl;
}
void Kisi::deleteAccount()
{
    Kisi::~Kisi();
}
void Kisi::search()
{
   
    
}
void Kisi::modify()
{
    int g;
    cout<<"What will you change"<<endl;
    cout<<"1.) Firstname"<<endl;
    cout<<"2.) Lastname"<<endl;
    cout<<"3.) Number"<<endl;
    cout<<"4.) Email"<<endl;
    cin>>g;
    if (g==1)
    {
        Kisi::setFirstName();
    }
    if(g==2)
    {
        Kisi::setLastName();
    }
    if (g==3)
    {
        Kisi::setNumber();
    }
    if(g==4)
    {
        Kisi::setEmail();
    }
    
}

void Kisi::listing()
{
    fflush(stdin);
    cout<<"First name:"<<getFirstName()<<endl;
    cout<<"Last name:"<<getLastName()<<endl;
    cout<<"Number:"<<getNumber()<<endl;
    cout<<"Email :"<<getEmail()<<endl;
    cout<<endl<<endl;
}

int main()
{
    int b=1;
   
    while (b)
    {
        Kisi **kisiler=new Kisi*[10];
        int x;
        cout<<"Please Enter id(from 1 to 10): ";
        cin>>x;
        while (!cin.good())
        {
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cout<<"Please Enter id:";
            int x;
            cin>>x;
        }
       
        
        kisiler[x]= new Kisi(x,"NULL","NULL","NULL","NULL");
        
      
        
        kisiler[x]->displayMessage();
        
        while(b)
            {
                int a;
                cin>>a;
        if(a==1)
        {
            int x;
            cout<<"please enter id: ";
            cin>>x;
            kisiler[x]->~Kisi();
        }
        else if(a==2)
        {
            int x;
            cout<<"please enter id: ";
            cin>>x;
            if (kisiler[x]==0)
            {
                cout<<"no user registration"<<endl;
            }
            else
            {
                kisiler[x]->listing();
            }
            
        }
        else if (a==3)
        {
            string x;
            cout<<"please enter name: ";
            cin>>x;
            for (int i=0;i<10; i++)
            {
                if (x==kisiler[i]->getFirstName())
                {
                    cout<<kisiler[i];
                    break;
                }
                else
                {
                    cout<<"there is no such user";
                }
               
            }
        }
        else if(a==4)
        {
            int x;
            cout<<"please enter id: ";
            cin>>x;
            kisiler[x]->modify();
        }
       
        else if(a==5)
        {
            int x;
            cout<<"please enter id: ";
            cin>>x;
            if (kisiler[x]==0)
            {
                cout<<"There is a registered user"<<endl;
            }
            else
            {
                kisiler[x]= new Kisi(x,"NULL","NULL","NULL","NULL");
            }
            
        }
        else if (a==6)
        {
            cout<<endl;
            b=0;
            break;
        }
        else
        {
            cout<<"You made the wrong choice";
        }
                kisiler[x]->displayMessage();
                
            }
       
       
    }
    
    return 0;
}
