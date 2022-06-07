#include <string>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		explicit Player(string name, int age, string position, string team, int weight);
		~Player();		
		void displayAllData();		
	private:
		string playerName;
		int playerAge;
		string playerPosition;
		string playerTeam;
		int playerWeight;
		int playerValue;		
		
		
		void setPlayerName(string name);
		void setPlayerAge(int age);
		void setPlayerPosition(string position);
		void setPlayerTeam(string team);
		void setPlayerWeight(int weight);
		void calculatePlayerValue();
		string getPlayerName() const;
		int getPlayerAge() const;
		string getPlayerPosition() const;
		string getPlayerTeam() const;
		int getPlayerWeight() const;
		int getPlayerValue() const;		
};


#endif
