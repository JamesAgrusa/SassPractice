#include <iostream>
#include "gameParameters.h"
#include "game.h"

using namespace std;

gameParameters::gameParameters()
{

}

void gameParameters::runParameters()
{
	rundown();
}

char gameParameters::rundown()
{
	game game;
	char choice;
	cout << "as youre about to sprint off looking for your three grand items, a whimsical thought is produced in your head." << endl;
	cout << "Do you choose to listen to this thought?\n\nHow do I not?(Y)\nKeep the thoughts to a minimum we have shit to find(N)" << endl;
	cin >> choice;
	if (choice == 'Y')
	{
		rules();
		game.test();
	}
	else if (choice == 'N')
	{
		// here a user, if they are sexy and want to play our game again, can skip and move straight into action
		game.test();
	}
	else
	{
		cout << "Invalid choice" << endl;
		rundown();
	}
	
	return choice;
}

void gameParameters::rules()
{
	cout << "" << endl;
	cout << "Hello and WELCOME to Phone Keys Wallet. Here is a rundown of what is needed" << endl;
	cout << "you will have 10 minutes to find you phone, keys, and wallet. A timer will be provided for you " << endl;
	cout << "if an object can be interacted with, you may do so using 'E'	" << endl;
	cout << "You can crouch with 'C' " << endl;
	cout << "if an object is moveable you can push it with 'space bar?'	" << endl;
	cout << "you will have an arrow above your head, the colors will change based on item closness" << endl; // lets pick if we like this concept. if so, here, lets pick 3 colors for the items. define for player
	cout << "once items are found within the timelimit you get to keep your job! " << endl;
	cout << "Good Luck!! your more than likely got this!" << endl;
	cout << "" << endl;
}
