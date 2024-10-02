#include <iostream>
#include <string>
#include <ctime>
#include "game.h"
#include "Kitchen.h"
#include "LivingRoom.h"
#include "Bathroom.h"
#include "LaundryRoom.h"

using namespace std;

game::game()
{

}

char game::roomChoice()
{
	char choice;
	Kitchen kitchen;
	LivingRoom livingRoom;
	Bathroom bathroom;
	LaundryRoom laundryRoom;

	cout << "Which room do you want to look in?\nA)Kitchen\nB)Living Room\nC)Bathroom\nD)Laundry Room" << endl;
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

void game::roomSearch()
{
	string itemFound;
	srand((unsigned int)time(NULL));
	string item[] = { "phone", "keys", "wallet" };
	itemFound = item[rand() % 3];
	cout << "You found your " << itemFound << " !" << endl;
	if (itemFound == "phone")
	{
		string item[] = { "keys", "wallet" };
		itemFound = item[rand() % 2];
		cout << "you found your " << itemFound << " !" << endl;
		if (itemFound == "keys")
		{
			cout << "you found your wallet!" << endl;
		}
	}
	if (itemFound == "keys")
	{
		string item[] = { "phone", "wallet" };
		itemFound = item[rand() % 2];
		cout << "you found your " << itemFound << " !" << endl;
		if (itemFound == "phone")
		{
			cout << "you found your phone!" << endl;
		}
	}
	if (itemFound == "wallet")
	{
		string item[] = { "keys", "phone" };
		itemFound = item[rand() % 2];
		cout << "you found your " << itemFound << " !" << endl;
		if (itemFound == "phone")
		{
			cout << "you found your keys !" << endl;
		}
	}
	roomChoice();
}