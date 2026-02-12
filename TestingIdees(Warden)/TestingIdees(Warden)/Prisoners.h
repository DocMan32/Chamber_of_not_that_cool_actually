#pragma once
#include <iostream>
#include <string>
#include <random>
#include <time.h>
#include <algorithm>
#include <vector>
#include <iterator>
#include <ctime>
#include <cstdlib>
using namespace std;
class Prisoners {

public:

	const string names[15]{ "John", "Max", "Noah", "Ashley", "Tom", "Zack",
		"Arin", "Dan", "Jack", "Sean", "Mark", "Henry", "Iris", "Lucy", "George" };
	

	int playerhp = rand() % 100;

	std::string word = names[rand() % 14];


	//choice remembering...
	int wrongchoice = 0;
	
};

class Rooms {
public:
	string onemore[9]{ "An empty table", "A Toolbox", "A Sword", "An Empty room dust covers the walls", "A Usb with a label",
	"A Unicorn Wizard's staff", "A Hat. A great Hat.", "A Key", "A Stick" };
	string others[9]{ "A sense of dread fills the air...", "A Glimmer of hope shoots through you, something about this room...", 
		"Something smells like it died in here!", "You Feel excited!!", "Crushing guilt has arrived",
	"Wonder, everywhere you look!", "You can feel your heart beating fast", "This game is PG stop feeling like that!", "Keep it together warden." };
	string nouns[9] {"A long hallway", "A solid door", "A weird painting", "A strange lamp", "A Locked terminal", 
	"A strange ladybug", "A window", "A letterbox", "A house"};

	std::string desc = nouns[rand() % 9];
	std::string Emotions = others[rand() % 9];
	std::string Items = onemore[rand() % 9];


};

class bio {
public:
	string characteristics[6]{ "Anger Issues", "clumsy", "Perpetually terrified", "Natrual born leader", "Cutie patootie", "Hesitant" };

	std::string chara = characteristics[rand() % 6];

	string ex[8]{ "Foreman", "Father", "Priest", "Scientist", "Military", "Paranormal investigator", "Police officer", "Chef" };

	std::string occupation = ex[rand() % 8];

	string history[12]{ "Involved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };

	string hist[12]{ "Involved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };

	string his[12]{ "Involved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };


	std::string his = history[rand() % 12];
	std::string his2 = hist[rand() % 12];
	std::string his3 = his[rand() % 12];



};
