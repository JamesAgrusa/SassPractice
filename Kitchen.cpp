#include "Kitchen.h"
#include "game.h"
#include <iostream>

using namespace std;

Kitchen::Kitchen()
{
	
}

void Kitchen::kitchenIntro()
{
	game game;
	cout << "You sprint down the stairs and now we are in the kitchen" << endl;
	game.roomSearch();
	//game.roomChoice();

}