#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

int main()
{
	fflush(stdin);

	Player myPlayer;
	myPlayer.displayPlayerInformation();
	myPlayer.setName();
	myPlayer.displayPlayerInformation();	
	
}
