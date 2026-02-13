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
#include "Prisoner2.h"
using namespace std;
class Prisoners {

public:

	const string names[15]{ "John", "Max", "Noah", "Ashley", "Tom", "Zack",
		"Arin", "Dan", "Jack", "Sean", "Mark", "Henry", "Iris", "Lucy", "George" };


	int Prisoner1hp = rand() %  101;

	int STRESS = 10;

	std::string word = names[rand() % 14];


	//choice remembering...
	int wrongchoice = 0;

	string Speedlvl = "Normal";

	
	// Responses
	string blah[8]{ "Roger that.", "Aye.", "Ok.", "You sure?", "Yes sir", "Affirmative", "Got it", "On it", };
	string sad[8]{ "Really??", "*UGH* Fine.", "If you say so...", "I dont know about this...", "what??...ok..", "fine but I dont want to....", "Tell my story..." };
	
	std::string mehRES = blah[rand() % 8];
	std::string unsureRES = sad[rand() % 8];


	


};

class Rooms {
public:
	string onemore[9]{ "An empty table", "A Toolbox", "A Sword", "An Empty room dust covers the walls", "A Usb with a label",
	"A Unicorn Wizard's staff", "A Hat. A great Hat.", "A Key", "A Stick" };
	string others[9]{ "A sense of dread fills the air...", "A Glimmer of hope shoots through you, something about this room...",
		"Something smells like it died in here!", "You Feel excited!!", "Crushing guilt has arrived",
	"Wonder, everywhere you look!", "You can feel your heart beating fast", "This game is PG stop feeling like that!", "Keep it together warden." };
	string nouns[9]{ "A long hallway", "A solid door", "A weird painting", "A strange lamp", "A Locked terminal",
	"A strange ladybug", "A window", "A letterbox", "A house" };
	string leveras[9]{ "A long hallway", "A solid door", "A weird painting", "A strange lamp", "A Locked terminal",
	"A strange ladybug", "A window", "A letterbox", "A house" };

	std::string desc = nouns[rand() % 9];
	std::string Emotions = others[rand() % 9];
	std::string Items = onemore[rand() % 9];
	std::string desc2 = leveras[rand() % 9];

};

class bio {
public:
	string characteristics[6]{ "Anger Issues", "A tendancy to be clumsy", "can be perpetually terrified", "a Natrual born leader", "a Cutie patootie", "can be hesitant" };

	std::string chara = characteristics[rand() % 6];

	string ex[8]{ "Foreman", "Father", "Priest", "Scientist", "Military", "Paranormal investigator", "Police officer", "Chef" };

	std::string occupation = ex[rand() % 8];

	string history[12]{ "Involved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };

	string hist[12]{ "Inolved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };

	string hisi[12]{ "Involved with clowns", "Hopeless romantic", "Shark wrestler", "Influencer", "Sugar daddy", "Being in prison",
	"Spreading as many diseases as possible", "Sneezing in every country on earth", "Being a pro circus player", "Being a team player",
	"Rockstar" };


	std::string his = history[rand() % 12];
	std::string his2 = hist[rand() % 12];
	std::string his3 = hisi[rand() % 12];





};

void Other() {
	int goofy = false; int circusboy = false; int noromeo = false; int sharkwrestle = false;  int influencer = false; int germo = false; int sneeze = false; int rockstar = false;

	bio bios;

	

	int lsts[8]{ goofy, circusboy, noromeo, sharkwrestle, influencer, germo, sneeze, rockstar };

	int index = 0;
	for (int scroll : lsts)
	{
		
		if (bios.his3 == "Involved with clowns")
		{
			goofy = 1;
			std::cout << lsts << "\n";
		}
		else if (bios.his3 == "Hopeless romantic")
		{
			noromeo = 1;
			std::cout << "No romeo tactic added to library//\n";
		}
		else if (bios.his3 == "Rockstar")
		{
			rockstar = 1;
			std::cout << "Rockstar tactics added to library//\n";
		}
		std::cout << scroll << "\n";
	}

	//for (string iter : bios.hisi)
	//{
	//	std::cout << iter << "\n";
	//	if (bios.his3 = selected)
	//	{
	//		std::cout << bios.his3 << "Is the trait.";
	//	}
	//
	//}

	// OK WELP LEAVING THAT FOR NOW. IT WORKS WELL ENOUGH I GUESS LOL
	//NOW TO FOCUS ON EXPLORATION!
	//...and do the assessments at home....
}


