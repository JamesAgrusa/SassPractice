#include <iostream>
#include "gameIntro.h"

using namespace std;

gameIntro::gameIntro()
{

}

void gameIntro::gameStart()
{
	intro();
	alarm();
}

void gameIntro::intro()
{
	cout << "Youre sound asleep, birds are chirping...Today has potential to be a good day...until" << endl;
	cout << "" << endl;
}

void gameIntro::alarm()
{
	cout << "Your alarm starts your day..." << endl;
	cout << "you look over at your clock...it reads 8:40. Work starts at 9! Wrong time set for the alarm today D:" << endl;
	cout << "if youre late one more time, youre FIRED!" << endl;
	cout << "You dont panick, you know it takes you 10 minutes to get to work" << endl;
	cout << "You see your uniform on the dresser.\nYoure now changed, all you need is your phone, keys, and wallet.\nWhat could Go wrong?!" << endl;
	cout << "" << endl;
}