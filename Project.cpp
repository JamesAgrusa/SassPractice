// Phone Keys Wallet
  // if youre late to work one more time youre fired
  // you live 10 minutes away, and you have 20 minutes before you need to get there!
  // youre eager to head to the door...execpt...
  // where is your Phone, wallet, or keys!!
  // you start in your room

// GAME HAS
  // clock/timer in HUD
  // interation button
  // crouching?
  // interact with lights?
  // HUD will have thee items dimmed out? once found lighten?
  // hot cold arrow?
  // move furninture?
  // how many rooms?
  // phone is vibrating from somewhere


// OBJECTIVE
  // Find your phone, keys, and wallet
	// maybe each item found will give a clue unlocked for next item - ie "check note on fridge" unrealistically we can make a note appear that was not there before

// CODEING NEEDS
	// a system that stores three items
	// at the start of the game those items need to randomly appear in a room
	// 1 item per room
	// interaction button
	// crouch button
	// move furniture feature
	// look angle follows body orientation
	// timer system

//GAME NEEDS	
	// a good start to the game

//PKW rough draft 1
#include <iostream>
#include "gameIntro.h"
#include "gameParameters.h"
#include "game.h"

using namespace std;

int main()
{
	gameIntro intro;
	gameParameters rules;

	intro.gameStart();
	rules.runParameters();

	return 0;
}

