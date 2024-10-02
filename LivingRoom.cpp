#include <iostream>
#include "game.h"
#include "LivingRoom.h"

using namespace std;

LivingRoom::LivingRoom()
{

}

void LivingRoom::LivingRoomIntro()
{
	game game;
	cout << "You slide down the stairway railing and ninja roll into the living room" << endl;
	game.roomSearch();
	game.roomChoice();
}