#include<iostream>
#include<string.h>
#include<stdio.h>
#include"rehber.h"
using namespace std;

 rehber::rehber(int userid,string userName, string userSurname, int userFirstThreeNumber,long int userNumber)
{
	setId(userid);
	setName(userName);
	setSurname(userSurname);
	setNumber(userNumber);	

}
rehber::~rehber()
{
	
}

void rehber::insertNewAccount()
{
	
 
 	/*cout<<"enter id: ";
	 cin<<userid;
	 cout<<endl;
	 cout<<"enter name: ";
	 cin<<userName;
	 cout<<endl;
	 cout<<"enter surname: ";
	 cin<<userSurname;
	 cout<<endl;
	 cout<<"enter first three telephone number: ";
	 cin<<userFirstThreeNumber;
	 cout<<endl;
	 cout<<"enter telephone number: ";
	 cin<<userNumber;
	 cout<<endl;
	 
	 rehber(i,ad,su,b,c);*/		

}

void rehber::DeleteAccount()
{
	
}

void rehber::Searching()
{
	
}








void rehber::setId(int userId)
{
	
	id=userId;
}
void rehber::setName(string userName)
{
	name=userName;
}
void rehber::setSurname(string userSurname)
{
	surname=userSurname;
}
void rehber::setfirstThreeNumber(int userFirstThreeNumber)
{
	firstThreeNumber=userFirstThreeNumber;
}
void rehber::setNumber(long int userNumber)
{
	number=userNumber;
}
int rehber::getId()const
{
	return id;
}
string rehber::getName()const
{
	string e;
	if(name.size()>=3)
	{
		return name;
	}
	else
	{
		return e;
	}
	
}
string rehber::getSurname()const
{
	
	return surname;
}
int rehber::getFirstThreeNumber() const
{
	int count=0;
	for(int i=0;i>3;i++)
	{
		if(firstThreeNumber%10>0)
		{
			count++;
		}
	}
	if(count==3)
	{
		return firstThreeNumber;
	}
	else
	{
		return 0;
	}
	
}
long int rehber::getNumber()const
{
	/*int countt=0;
	for(int j=0;j>7;j++)
	{
		if(number%10>0)
		{
			countt++;
		}
	}
	if(countt==7)
	{
		return number;
	}
	else
	{
		return 0;
	}*/
}











void rehber::Listing()
{
	cout<<"id: "<<getId()<<endl;
	cout<<"name: "<<getName()<<endl;
	cout<<"surnaname: "<<getSurname()<<endl;
	cout<<"first three numbers: "<<getFirstThreeNumber()<<endl;
	cout<<"telephone:"<<getNumber()<<endl;
	
}

void rehber::Modifying()
{
	
}
void rehber::mainMenu()
{
	
	cout<<"Please choose"<<endl;
	int choice;
	
	cout<<"1--> Add account"<<endl;
	cout<<"2--> Delete account"<<endl;
	cout<<"3--> Search account"<<endl;
	cout<<"5--> Modifying account"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			rehber::insertNewAccount();
			break;
		case 2 :
			rehber::DeleteAccount();
			break;
		case 3:
			rehber::Searching();
			break;
		case 4:
			rehber::Modifying();
			break;
		
	}
}
