#include <iostream>
#include "game.h"
#include "Bathroom.h"

using namespace std;

Bathroom::Bathroom()
{

}

void Bathroom::BathroomIntro()
{
	game game;
	cout << "you cartwheel down the hallway and explode into the bathroom" << endl;
	game.roomSearch();
	game.roomChoice();
}