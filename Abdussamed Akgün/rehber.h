#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
#ifndef REHBER_H
#define REHBER_H

class rehber
{
	public:
	explicit rehber(int userid,string userName, string userSurname, int userFirstThreeNumber,long int userNumber);
	~rehber();
	
	
	private:
		int id;
		string name;
		string surname;
		int firstThreeNumber;
		long int number;
		
	

		void setId(int id);
		void setName(string name);
		void setSurname(string surname);
		void setfirstThreeNumber (int firstThreeNumber);
		void setNumber(long int number);
		int    	 getId() const;
		string 	 getName()const;
		string 	 getSurname()const;
		int    	 getFirstThreeNumber() const;
		long int getNumber() const;
		
		
		public:
		void mainMenu();
		void insertNewAccount();
		void DeleteAccount();
		void Searching();
		void Listing();
		void Modifying();
};

#endif
