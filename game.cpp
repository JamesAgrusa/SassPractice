#include <iostream>
#include "game.h"
#include "Kitchen.h"
#include "LivingRoom.h"
#include "Bathroom.h"
#include "LaundryRoom.h"

using namespace std;

game::game()
{

}

char game::levelChoice()
{
	char choice;
	Kitchen kitchen;
	LivingRoom livingRoom;
	Bathroom bathroom;
	LaundryRoom laundryRoom;

	cout << "" << endl;
	cout << "Here, our humble adventure beings." << endl;
	cout << "First things first, which room do you want to look in?\nA)Kitchen\nB)Living Room\nC)Bathroom\nD)Laundry Room" << endl;
	cout << "" << endl;
	cin >> choice;
	cout << "You have picked " << choice << " lets head that way" << endl;
	cout << "" << endl;
	if (choice == 'A') 
	{
		kitchen.kitchenIntro();
	}
	if (choice == 'B')
	{
		livingRoom.LivingRoomIntro();
	}
	if (choice == 'C')
	{
		bathroom.BathroomIntro();
	}
	if (choice == 'D')
	{
		laundryRoom.LaundryRoomIntro();
	}

	return choice;
}