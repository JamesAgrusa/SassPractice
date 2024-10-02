#include <iostream>
#include "game.h"
#include "LaundryRoom.h"

using namespace std;

LaundryRoom::LaundryRoom()
{

}

void LaundryRoom::LaundryRoomIntro()
{
	game game;
	cout << "you tumble down the stairs as you trip then you nose dive into the Laundry Room" << endl;
	game.roomSearch();
	game.roomChoice();
}