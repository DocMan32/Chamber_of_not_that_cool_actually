#include <iostream>
#include <time.h>
#include <random>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <search.h>
#include <cctype>
#include "Prisoners.h"
#include "Prisoner2.h"
using namespace std;

/*
if (Pchoice == "")
		{
		}


*/

int FirstRoom(Rooms& Theroom, Prisoners& subject, bio& charinfo,
	Prisoner2& Prisoner_2, bio2& Bio_2);

/*
if ()
		{

		}
*/


int main() {
	
	//testing typewriter effect
	//std::string s = "Hello";

	//for (const auto c : s) {
	//	std::cout << c << std::flush;
	//	std::this_thread::sleep_for(std::chrono::milliseconds(500));

	//}


	//Refrencing the Prisoners header file

	srand(time(0));
	bio charinfo;
	Prisoners subject;
	Rooms Theroom;
	Prisoner2 Prisoner_2;
	bio2 Bio_2;

	

	// Keeping track of current character statistics -->
	/*if (charinfo.his3 == "Involved with clowns")
	{
		std::cout << "You. ARE. a goofy goober.";
	}
	else if (charinfo.his3 == "Influencer")
	{
		std::cout << "Thats not a job bro.";
	}
	else if (charinfo.his3 == "Shark wrestler")
	{
		std::cout << "What?! How!?? Do you at least get insurance!???";
	}
	else if (charinfo.his3 == "Hopeless romantic")
	{
		std::cout << "Big oof..";
	}
	else if (charinfo.his3 == "Being in prison")
	{
		std::cout << "With the dementors?....say hi to mike for me";
	}
	else if (charinfo.his3 == "Spreading as many diseases as possible")
	{
		std::cout << "Why???";
	}*/





	//intro sequence

	string hello = "Booting systems...\n...";
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		Sleep(250 + rand() % 250);
		x++;
	};
	
	

	int b = 0;
	cout << "\nThe prisoner you are assigned is: \n";
	system("pause");
	while (subject.word[b] != '\0')
	{
		cout << subject.word[b];
		Sleep(90 + rand() % 150);
		b++;
	};
	std::cout << "\n";
	std::cout << "Information of prisoner is as follows: \n";
	charinfo.chara; // Characteristics
	charinfo.occupation; // Occupation 
	//hmm this gives me an idea...
	//presenting something cool:
	std::cout << subject.word << " recently worked as a " << charinfo.occupation << " and were arrested at an unknown date\n";
	std::cout << "The subject appears to have " << charinfo.chara << " This information should be used WISELY warden. Theyre history\n";
	std::cout << "appears to be full of " << charinfo.his << ", " << charinfo.his2 << " and " << charinfo.his3 << " Keep that\n";
	std::cout << "in mind warden. Theyre lives are in your hands.";

	system("pause");
	
	int c = 0;
	

	cout << "\n\nMission Briefing received 192.1.233.1 10/09/2xxx\n";
	cout << "Movement detected 500m~ down. Initiate scanning routine. Extract environmental information. Hades lives.\n";
	cout << "Do you accept this briefing?\n\n";
	string choice = "Enter your choice: Y / Y?";
	while (choice[c] != '\0')
	{
		cout << choice[c];
		Sleep(50 + rand() % 60);
		c++;
	}
	std::cout << "\n";
	string confi;
	cin >> confi;
	
	if (confi == "n" || confi == "N" || confi == "NO" || confi == "no") {
		subject.wrongchoice = 1;
		std::cout << "noted.";
	}
	else if (confi == "Y" || confi == "y") {
		std::cout << "Overview: \n";
		std::cout << "Prisoner: " << subject.word << "\n";
		std::cout << "Stress levels: " << subject.STRESS << "\n";
		std::cout << "Prisoner Health: ";

		string healthcal = "calculating... ";
		int f = 0;
		while (healthcal [f] != '\0')
		{
			cout << healthcal[f];
			Sleep(200 + rand() % 250);
			f++;
		}
		if (subject.Prisoner1hp == 20) {
			std::cout << subject.Prisoner1hp << " " << "Status: Critical.\n";
		}
		else if (subject.Prisoner1hp < 70) {
			std::cout << subject.Prisoner1hp << " " << "Status: Nominal.\n";
		}
		else if (subject.Prisoner1hp < 50) {
			std::cout << subject.Prisoner1hp << " " << "Status: Dangerous.\n";
		}
		else if (subject.Prisoner1hp == 50) {
			std::cout << subject.Prisoner1hp << " " << "Status: Fine.\n";
		}
		
		
		std::cout << "Most recent Occupation: " << charinfo.occupation << "\n";
		std::cout << "Outlining Characteristics: " << charinfo.chara << "\n";

		int d = 0;
		string thinking = "Processing odds...\n...\n...\n";
		while (thinking[d] != '\0')
		{
			cout << thinking[d];
			Sleep(200 + rand() % 250);
			d++;
		}
		std::cout << "ERROR Result Unexpected due to impossible odds.\nReturning to earlier state.\n";
		std::cout << "Activating secondary prisoner for task.\n";
		std::cout << "Skipping initial briefing. Initiating Overview:\nName: " << Prisoner_2.word << "\n";
		std::cout << "Prisoner Health: ";
		if (Prisoner_2.Prisoner1hp = 50) {
			std::cout << Prisoner_2.Prisoner1hp << " " << "Status: Fine.\n";
		}
		else if (Prisoner_2.Prisoner1hp < 50) {
			std::cout << Prisoner_2.Prisoner1hp << " " << "Status: Dangerous\n";
		}
		else if (Prisoner_2.Prisoner1hp < 20) {
			std::cout << Prisoner_2.Prisoner1hp << " " << "Status: Critical\n";
		}
		else if (Prisoner_2.Prisoner1hp > 70) {
			std::cout << Prisoner_2.Prisoner1hp << " " << "Status: Nominal\n";
		}
		std::cout << "Stress levels: " << Prisoner_2.STRESS << "\n";
		std::cout << "Most recent Occupation: " << Bio_2.occupation << "\n";
		std::cout << "Outlining Characteristics: " << Bio_2.chara << "\n";

		FirstRoom(Theroom, subject, charinfo, Prisoner_2, Bio_2);


	}




}



int FirstRoom(Rooms& Theroom, Prisoners& subject, bio& charinfo,
	Prisoner2& Prisoner_2, bio2& Bio_2) {


		int noise = 0;

		if (subject.Speedlvl == "Normal")
		{
			int noise = rand() % 40;
		}
		if (subject.Speedlvl == "Fast")
		{
			int noise = rand() % 60;
		}
		if (subject.Speedlvl == "Slow")
		{
			int noise = rand() % 10;
		}


		int MissionActive = true;
		cout << " " << Theroom.Emotions << " " << Theroom.desc << " and " << Theroom.desc2 << " \n";
		while (MissionActive == true)
		{
		string Pchoice;
		std::getline(std::cin, Pchoice);
		std::transform(Pchoice.begin(), Pchoice.end(), Pchoice.begin(),
			[](unsigned char Pchoice) { return std::tolower(Pchoice); });



		// This will be where the big ass IF statement will be:
		if (Pchoice.find("painting") != string::npos)
		{
			std::cout << "cool painting";
		}
		if (Pchoice.find("command") != string::npos)
		{

			// Commands Function: 

			std::cout << "Command console active.\n\n";
			std::cout << "Connecting to Prisoners... \n";
			std::cout << "Connection Achieved!\nResults!: \n";
			

			std::cout << "ID: " << subject.word << "\n";
			std::cout << "Health: " << subject.Prisoner1hp << "\n";
			std::cout << "Stress levels: " << subject.STRESS << "\n";
			std::cout << "Attributes: " << charinfo.chara << "\n";
			std::cout << "\n\n";
			std::cout << "ID: " << Prisoner_2.word << "\n";
			std::cout << "Health: " << Prisoner_2.Prisoner1hp << "\n";
			std::cout << "Stress levels: " << Prisoner_2.STRESS << "\n";
			std::cout << "Attributes: " << Bio_2.chara << "\n";

			// Random Dialouge
			std::string tm[2]{ subject.word, Prisoner_2.word };

			std::string SharedDialSEL = tm[rand() % 2];



			// Making the user choice
			string CommIn;
			// Getting everything they type
			std::getline(std::cin, CommIn);
			// Understand the text whether lower or upper caps
			std::transform(CommIn.begin(), CommIn.end(), CommIn.begin(),
				[](unsigned char CommIn) { return std::tolower(CommIn); });


			//For returning back to main loop
			if (CommIn.find("return") != string::npos || CommIn.find("exit") != string::npos || CommIn.find("leave") != string::npos)
			{
				std::cout << "Returning to Main_Monitor";
				system("cls");
				std::cout << "\n Main_Monitor: ";
				return;
			}
			
			// Setting Speed for prisoner movement
			if (CommIn.find("Speed") != string::npos)
			{
				std::cout << "Current Speed Level: " << subject.Speedlvl << "\n";
				std::cout << "Options: Slow, Normal, Fast";
				string slide;
				std::getline(std::cin, slide);

				if (slide.find("Fast") != string::npos || slide.find("Faster") != string::npos)
				{
					subject.Speedlvl = "fast";
					std::cout << "Updating instructions..." << "Comms:\n " << SharedDialSEL << ": " << subject.unsureRES 
						<< "\nSpeed updated successfully." << "\n";  //resonse from Prisoners
					std::cout << "Current noise Estimation: ~60%";
					return;
				}
				if (slide.find("Normal") != string::npos)
				{
					subject.Speedlvl = "Normal";
					std::cout << "Updating instructions..." << "Comms: \n" << SharedDialSEL << subject.mehRES << "\n";
					std::cout << "Current noise estimation: nominal.\n";
					return;

				}
				if (slide.find("Slow") != string::npos || slide.find("slower") != string::npos)
				{
					subject.Speedlvl = "Slow";
					std::cout << "Updating instructions..." << "Comms: \n" << SharedDialSEL << subject.mehRES << "\n";
					std::cout << "Current noise estimation: Quieter.\n";
					return;
				}
			}
				else if (CommIn.find("calm") != string::npos)
				{
				std::cout << "On who?\n";
				string picky;
				std::getline(std::cin, picky);
				if (picky.find("P1") != string::npos || picky.find(subject.word) != string::npos) {
					std::cout << "Comms: \n" << subject.word << ": " << subject.mehRES;
					std::cout << "\nStress levels decrease. Current stress levels: " << subject.STRESS << " " << Prisoner_2.STRESS << "\n";
					return;

				}
				else if (picky.find("P2") != string::npos || picky.find(Prisoner_2.word) != string::npos) {
					std::cout << "Comms: \n" << subject.word << ": " << subject.mehRES;
					std::cout << "\nStress levels decrease. Current stress levels: " << subject.STRESS << " " << Prisoner_2.STRESS << "\n";
					return;
				}
			}
			
		}
		
	}
	int xcc = 2;
	return(xcc);
}
					



//
//std::string fizzbuzz(int i)
