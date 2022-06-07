#include "rehber.h"
#include<iostream>
#include<stdio.h>
#include <string>
#include <iomanip>
#include "PhoneNumber.h"

rehber::rehber()
{
    cout<<endl<<"-------NEW ACCOUNT INFORMATION PAGE--------"<<endl<<endl;
    
    setFirstName();
    cout<<endl;
  
    setLastName();
    cout<<endl;

    setNumber();
    cout<<endl;
  
    setEmail();
    cout<<getFirstName()<<" is created "<<endl<<endl;
    
    
    
}
rehber::~rehber()
{
    cout<<getFirstName()<<"Account is deleted";
    
}
rehber::Kisi()
{
    
}
ostream &operator<<( ostream &output, const rehber &Kisi)
{
    output<<Kisi.getFirstName()<<endl<<Kisi.getLastName()<<endl<<Kisi.getNumber()<<endl<<Kisi.getEmail();
    return output;
}
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
   output << "(" << number.areaCode << ") "
      << number.exchange << "-" << number.line;
   return output;
}

istream &operator>>( istream &input, PhoneNumber &number )
{
   input.ignore(); // skip (
   input >> setw( 3 ) >> number.areaCode; // input area code
   input.ignore( 2 ); // skip ) and space
   input >> setw( 3 ) >> number.exchange; // input exchange
   input.ignore(); // skip dash (-)
   input >> setw( 4 ) >> number.line; // input line
   return input; // enables cin >> a >> b >> c;
}

void rehber::setFirstName()
{
    string _FirstName="";
    
    do
    {
        cout<<"Enter first name: ";
        cin>>_FirstName;
        cout<<endl;
    }
    while(_FirstName.size()<3);
    firstname=_FirstName;
}
void rehber::setLastName()
{
    string _LastName="";
    
    do
    {
        cout<<"Enter last name: ";
        cin>>_LastName;
        cout<<endl;
        
    }
    while(_LastName.size()<2);
    lastname=_LastName;
}
void rehber::setNumber()
{
    string _Number="";
    
    do
    {
        cout<<"Enter telephone number: ";
        cin>>_Number;
        cout<<endl;
    }
    while(_Number.size()==11);
    number=_Number;
}
void rehber::setEmail()
{
    string _Email="";
    
    cout<<"Enter email: ";
    cin>>_Email;
    cout<<endl;
        
    email=_Email;
}

string rehber::getFirstName()const
{
    return firstname;
}
string rehber::getLastName() const
{
    return lastname;
}
string rehber::getNumber() const
{
    return number;
}
string rehber::getEmail() const
{
    return email;
}

void rehber::addNewAccount()
{
    string firstnameerray[100];
    string lastnameerray[100];
    string numbererray[100];
    string emailerray[100];
    int a=0;
    while(1)
    {
      
        if (firstnameerray[a].size()<1)
        {
            firstnameerray[a]=getFirstName();
            cout<<firstnameerray[a]<<endl;
            break;
        }
        else
        {
            a=a+1;
        }
        
    }
    
    while(1)
    {
      
        if (lastnameerray[a].size()<1)
        {
            lastnameerray[a]=getLastName();
            cout<<lastnameerray[a]<<endl;
            break;
        }
        else
        {
            a=a+1;
        }
        
    }
   
    while(1)
    {
        if (numbererray[a].size()<1)
        {
            numbererray[a]=getNumber();
            cout<<numbererray[a]<<endl;
            break;
        }
        else
        {
            a=a+1;
        }
        
    }
    while(1)
    {
      
        if (emailerray[a].size()<1)
        {
            emailerray[a]=getEmail();
            cout<<emailerray[a]<<endl;
            break;
        }
        else
        {
            a=a+1;
        }
        
    }
    cout<<firstnameerray[0];
    cout<<firstnameerray[1];
    cout<<firstnameerray[2];
    cout<<firstnameerray[3];
    cout<<endl<<endl<<"user created"<<endl;
    
    
}
void rehber::listing()
{
    fflush(stdin);
    cout<<"First name:"<<getFirstName()<<endl;
    cout<<"Last name:"<<getLastName()<<endl;
    cout<<"Number:"<<getNumber()<<endl;
    cout<<"Email :"<<getEmail()<<endl;
    cout<<endl<<endl;
}
void rehber::modify()
{
    int g;
    cout<<"what will you change"<<endl;
    cout<<"1.) Firstname"<<endl;
    cout<<"2.) Lastname"<<endl;
    cout<<"3.) Number"<<endl;
    cout<<"4.) Email"<<endl;
    cin>>g;
    if (g==1)
    {
        rehber::setFirstName();
    }
    if(g==2)
    {
        rehber::setLastName();
    }
    if (g==3)
    {
        rehber::setNumber();
    }
    if(g==4)
    {
        rehber::setEmail();
    }
    
}

void rehber::displayMessage()
{
    cout<<endl;
    cout<< "1st option delete"<<endl;
    cout<< "2nd option listing"<<endl;
    cout<< "3rd option search"<<endl;
    cout<< "4th option modify"<<endl;
    cout<<"5th option record"<<endl;
    cout<<"6th option add account"<<endl;
    cout<<"enter your seleciton:  "<<endl;
    /*cout<<"press zero to exit"<<endl<<endl;*/
    cout<<endl;
}
void rehber::deleteAccount()
{
    rehber::~rehber();
}
void rehber::search()
{
    
}

int main()
{
    Kisi **kisiler= new Kisi*[10];
    
    while (1)
    {
        rehber reh1;
        reh1.displayMessage();
        
        while(1)
            {
                int a;
                cin>>a;
        if(a==1)
        {
            reh1.deleteAccount();
        }
        else if(a==2)
        {
            reh1.listing();
        }
        else if (a==3)
        {
            reh1.search();
        }
        else if(a==4)
        {
            reh1.modify();
        }
       
        else if(a==5)
        {
            reh1.addNewAccount();
        }
        else if (a==6)
        {
            cout<<endl;
            break;
        }
        else
        {
            cout<<"You made the wrong choice";
        }
                    reh1.displayMessage();
                
            }
    }

}
    
