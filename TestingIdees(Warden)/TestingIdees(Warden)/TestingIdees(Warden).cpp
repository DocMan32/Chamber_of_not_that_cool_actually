#include <iostream>
#include <time.h>
#include <random>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <search.h>
#include "Prisoners.h"

using namespace std;



int FirstRoom(Rooms& Theroom) {
	srand(time(0));

	int P = 0;
	cout << " " << Theroom.desc << " " << Theroom.desc << " " << Theroom.desc << " \n";
	for (P = 0; P < 3; ++P)
	{
		string Pchoice;
		cin >> Pchoice;
		std::getline(std::cin, Pchoice);
		std::cout << Pchoice;
		


	}
	return 0;
}


int main() {
	//testing typewriter effect
	//std::string s = "Hello";

	//for (const auto c : s) {
	//	std::cout << c << std::flush;
	//	std::this_thread::sleep_for(std::chrono::milliseconds(500));

	//}




	srand(time(0));
	bio charinfo;
	Prisoners subject;
	Rooms Theroom;

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
	std::cout << "Information of prisoner is as follows: \n";
	charinfo.chara; // Characteristics
	charinfo.occupation; // Occupation 
	//hmm this gives me an idea...
	//presenting something cool:
	std::cout << subject.word << "recently worked as a " << charinfo.occupation << " and were arrested at an unknown date\n";
	std::cout << "The subject appears to have " << charinfo.chara << " This information should be used WISELY warden. Theyre history\n";
	std::cout << "appears to be full of " << charinfo.his << ", " << charinfo.his2 << " and " << charinfo.his3 << " Keep that\n";
	std::cout << "in mind warden. Theyre lives are in your hands.";

	int c = 0;
	cout << "\n\nMission Briefing received 192.1.233.1 10/09/2xxx\n";
	cout << "Movement detected 500m~ down. Initiate scanning routine. Extract environmental information. Hades lives.\n";
	cout << "Do you accept this briefing?\n\n";
	string choice = "Enter your choice: Y / Y?";
	while (choice[c] != '\0')
	{
		cout << choice[c] << "\n";
		Sleep(50 + rand() % 60);
		c++;
	}
	string confi;
	cin >> confi;
	cout << "noted.";
	if (confi == "n" || confi == "N" || confi == "NO" || confi == "no") {
		subject.wrongchoice = 1;
	}
	else if (confi == "Y" || confi == "y") {
		FirstRoom(Theroom);
	}
}



//
//std::string fizzbuzz(int i)
