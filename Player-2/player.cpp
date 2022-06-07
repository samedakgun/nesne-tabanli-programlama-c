#include <string>
#include <iostream>
#include "Player.h";
using namespace std;

Player::Player(string name, int age, string position, string team, int weight)
{
	setPlayerName(name);
	setPlayerAge(age);
	setPlayerPosition(position);
	setPlayerTeam(team);
	setPlayerWeight(weight);
	calculatePlayerValue();
	cout<<"Inside the constructor "<<playerName<<" is created"<<endl;
}

Player::~Player()
{
	cout<<playerName<<" is destroyed by the destructor"<<endl;
}

void Player::displayAllData()
{
	cout<<"Player name: "<<getPlayerName()<<endl;
	cout<<"Player age: "<<getPlayerAge()<<endl;
	cout<<"Player position: "<<getPlayerPosition()<<endl;
	cout<<"Player team: "<<getPlayerTeam()<<endl;
	cout<<"Player weight "<<getPlayerWeight()<<endl;
	cout<<"Player value "<<getPlayerValue()<<endl;	
}

void Player::setPlayerName(string name)
{
	playerName = name;
}
	
void Player::setPlayerAge(int age)	
{
	playerAge = age;
}	

void Player::setPlayerPosition(string position)	
{
	playerPosition = position;
}

void Player::setPlayerTeam(string team)
{
	playerTeam = team;
}

void Player::setPlayerWeight(int weight)
{
	playerWeight = weight;
}

void Player::calculatePlayerValue()
{
	int value=0;
	
	if(playerTeam =="Manchester United")
	{
		value = value + 5;
	}
	else if (getPlayerTeam() == "Real Madrid")
	{
		value = value + 10;
	}
	else
	{
		value = value + 2;
	}
	
	if(playerAge<24)
	{
		value = value + 10;
	}
	else if(playerAge<29)
	{
		value = value + 5;
	}
	else if(playerAge<32)
	{
		value = value + 2;
	}
	
	playerValue = value;
}
	
string Player::getPlayerName() const
{
	return playerName;
}

int Player::getPlayerAge() const
{
	return playerAge;
}

string Player::getPlayerPosition() const
{
	return playerPosition;
}

string Player::getPlayerTeam() const
{
	return playerTeam;
}

int Player::getPlayerWeight() const
{
	return playerWeight;
}	

int Player::getPlayerValue() const
{
	return playerValue;
}
