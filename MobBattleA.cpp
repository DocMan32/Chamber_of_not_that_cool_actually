#include <iostream>
#include <random>
#include <time.h>
#include <cstdlib>


//just for fun
class Gambling {
public:
	std::string Wager;
	bool LinkIsRich = false;
	int betting = 0;
};

// struct for mob 
struct Mob
{
public:
	int health = 0;

	// attack skill
	std::string Mask;
	// damage rating, name, 
	int dmgrat = 0;
	std::string E_Name;
};


void BattleGO(Mob& Ganon, Mob& Ganon2, Gambling gambit)
{


	// Dice stuff
	int battleDice = rand() % 20 + 1;

	int i = 0;
	for (Ganon.health > 0 && Ganon2.health > 0; ++i;)
	{
		if (Ganon.health >= 0 && Ganon2.health >= 0)
		{


			int battleDice = rand() % 20 + 1;
			int battleDice2 = rand() % 20 + 1;
			system("pause");


			std::string Skill1 = Ganon.Mask;
			std::string Skill2 = Ganon2.Mask;

			std::cout << "\n\n To roll and fight: ";
			system("pause");
			//calculating
			int dmgval = battleDice + Ganon.dmgrat;
			int dmgvalboogaloo = battleDice2 + Ganon2.dmgrat;

			Ganon.health -= dmgval;
			Ganon2.health -= dmgvalboogaloo;



			std::cout << "You rolled a: " << battleDice << "\n";
			std::cout << "OW!\n" << Ganon.E_Name << " dealt " << dmgval << " using their " << Ganon.Mask << "!\n";
			std::cout << "And " << Ganon2.E_Name << " fought back with their " << Ganon2.Mask << " dealing " <<
				battleDice2 + Ganon2.dmgrat << "!\n";
			// check if dead
			if (Ganon.health <= 0)
			{
				std::cout << "Oh my god! " << Ganon.E_Name << " Died!\nWho could've seen that coming!?\n";
				if (gambit.LinkIsRich == true)
				{
					std::cout << "Yikes....you uh well...you lost.\nObviously.\n";
					std::cout << "It looks like you wagered about: " << gambit.betting << " On link...\n";
					std::cout << "Ok kid lemme do the math for a sec ok?\n...\n";
					system("pause");
					std::cout << "Great news! you only owe us about: " << gambit.betting * 2 + 1 << " will that be cash, card or flormbux?\n";

				}
				break;
			}
			else if (Ganon2.health <= 0)
			{
				std::cout << "GOOD GRIEF! " << Ganon2.E_Name << " Died!\n Some people are going to be VERY rich!\n";
				std::cout << "CONGRADULATIONS YOU-- oh.\n wait...\n You bet on Majora?\n Oooooh....weeeelll i'll just leave this here then....\n";
				std::cout << "*A reciept is slid across the counter, in black thick marker the words 'YOU OWE: " << gambit.betting * 2 + 1 << "' you feel a slight rage flicker.\n";
				std::cout << "So....you wanna pay that in like...flormbux orrr....?";
				break;
			}
			else if (Ganon.health > 0 && gambit.LinkIsRich == true && Ganon2.health <= 0)
			{

				std::cout << "CONGRADULATIONS!!!\nYOU HAVE WON THE BET! YOU'RE FIGHTER WON!\NYOU KNOW WHAT THAT MEANS??\n";
				std::cout << "...\n";
				system("pause");
				std::cout << "...\n";
				system("pause");
				std::cout << "It means. You're our next fighter. *the mans smile curls upward sadistically* Why the long face??\nYou won! Go! enjoy your winnings!!\nWhile you can.\n";
				std::cout << "\n\nYou Win!\nTotal Winnings: " << gambit.betting * 3 << "!\nCome back real soon!";
			}
			else if (Ganon.health > 0 && gambit.LinkIsRich == false && Ganon2.health <= 0)
			{
				std::cout << "Tough break kid. Personally I would've banked on the fantasy time twink to win. But nothin' you\ncan do now I 'spose.\n ";
				std::cout << "Winner: Link!\nYour winnings: 0\nYour debt: " << gambit.betting << "!\n";
			}

			else if (Ganon2.health > 0 && gambit.LinkIsRich == false && Ganon.health <= 0)
			{
				std::cout << "CONGRADULATIONS! YOUR FIGHTER WON! AN--\nWait...your fighter won?\nDosen't that mean--\noh hylia...well. here have your damn money!\n";
				std::cout << "Just take it! +" << gambit.betting * 3 + 1 << "! Oh my...the moon.\nThe moon its almost here!\nOH NO NO\n NOOOO---\n";
				std::cout << "YOU WIN!\nYour winnings: " << gambit.betting << "!\n A winner is you!\nBonus reward: A sick life-long gaze at the moon up close!\n";
			}
			std::cout << "Current health of our contestants!: \n" << Ganon.E_Name << ": " << Ganon.health << "\n" << Ganon2.E_Name << ": " << Ganon2.health << "\n";

		}
	}
}


	//while (Ganon.health > 0 && Ganon2.health > 0)
	//{
	//	
	//	// Battle stuff here
	//	
	//	std::string Skill1 = Ganon.Mask;
	//	std::string Skill2 = Ganon2.Mask;

	//	std::cout << "\n\n To roll and fight: ";
	//	system("pause");
	//	//calculating
	//	int dmgval = battleDice + Ganon.dmgrat;
	//	int dmgvalboogaloo = battleDice + Ganon2.dmgrat;

	//	Ganon.health -= dmgval;
	//	Ganon2.health -= dmgvalboogaloo;



	//	std::cout << "You rolled a: " << battleDice << "\n";
	//	std::cout << "OW!\n" << Ganon.E_Name << " dealt " << dmgval << " using their " << Ganon.Mask << "!\n";
	//	std::cout << "And " << Ganon2.E_Name << " fought back with their " << Ganon2.Mask << " dealing " << 
	//		battleDice + Ganon2.dmgrat << "!\n";
	//	std::cout << "Current health of our contestants!: \n" << Ganon.E_Name << ": " << Ganon.health << "\n" << Ganon2.E_Name << ": " << Ganon2.health << "\n";

	//}











int main()
{
	Gambling gambit;
	srand(time(0));



	std::cout << "TIME TO BET LOSER WHO DO YOU THINK WILL WIN??\n";
	std::cout << "1. Link\n2. Majora\nChoose Now!: ";
	std::cin >> gambit.Wager;
	if (gambit.Wager == "1")
	{
		// betting on Link
		gambit.LinkIsRich = true;
		std::cout << "How much money are you betting on them?????\n";
		int fun;
		std::cin >> fun;
		gambit.betting = fun;
	}
	else if (gambit.Wager == "2")
	{
		// betting on Majora
		gambit.LinkIsRich = false;
		std::cout << "How much money are you betting???!\n";
		int bouttamakeaname;
		std::cin >> bouttamakeaname;
		gambit.betting = bouttamakeaname;

	}




	Mob Ganon = { 30, " Masking powers or something idk ", 7, "Majora" };
	Mob Ganon2 = { 33, " Lawn Mowing Capabilities ", 5, "Link" };
	BattleGO(Ganon, Ganon2, gambit);

}

