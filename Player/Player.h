#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		explicit Player();
		~Player();
		
		void setName();
		void setTeam();
		void setValue();
		void setPhoneNumber();
		
		string getName() const;
		string getTeam() const;
		int getValue() const;
		string getPhoneNumber()const;
		
		void displayPlayerInformation() const;
		
	private:
		string name;
		string team;
		int value;
		string phoneNumber;	
};

#endif
