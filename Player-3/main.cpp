#include <iostream>
#include <string>
#include "Player.h"
using namespace std;


int main()
{
	int response;
	cout<<"Please enter increment of value: ";
	cin>>response;
	Player player1("Ronaldo", 28, "Forward", "Real Madrid", 80);
	Player player2("Neymar", 28, "Forward", "Manchester United", 80);
	Player player3("Balotelli", 28, "Forward", "Adanaspor", 80);
	
	cout<<player1<<endl;
	cout<<endl;
	cout<<player2<<endl;
	cout<<endl;
	cout<<player3<<endl;
	cout<<endl;
	cout<<Player::getAverageValue();
	player1+=response;
	cout<<endl;
	cout<<Player::getAverageValue();
	
	
}
