#include <iostream>
#include <string>
#include <array>
#include <windows.h>
#include <random>
#include <time.h>
#include <conio.h>
#include "inventory.h"
using namespace std;




const char* CSI = "\x1b["; // Control Sequence Introducer...duh
const char* TITLE = "\x1b[5;20H"; // moves cursor to co-ordinates to make a title
const char* INDENT = "\x1b[5C"; // moves the cursor right by 5 characters
const char* YELLOW = "\x1b[93m";
const char* MAGENTA = "\x1b[95m";
const char* RESET_COLOUR = "\x1b[0m";
const char* SAVE_CURSOR_POS = "\x1b[s"; // only save one position, its saved on the console itself.
const char* RESTORE_CURSOR_POS = "\x1b[u";
const char* TitleChange = "SetConsoleTitle";


//HA.




class dicestore {
public:

    float dicedefend;
    int FullDamage = 0;
    int Modifier = 0;


};



void room1() {


    cout << "OK IT WORKED";


    // dosent work -> TitleChange = "Boring Room";
}




//the enemies that can be encountered and their battles.


void skeleton() {


    Inventory boned;


    int hp = boned.enemy_health;
    int dama = boned.base_damage;


}


void fighthistory() {





}




void statsscreen() {

    cout << "Great job";
}


void fight(Inventory& mod) {



    cout << "On the Left we Have " << mod.Pname;
    cout << " At a WOPPING! " << YELLOW << mod.Phealth << RESET_COLOUR << " Health!\n";
    cout << "And on the right is the mean green vasaline machine PHIIIILLLLLLLL at a BIG OL' " << MAGENTA << mod.enemy_health << " HEALTH POINNTSSSSS!!\n" << RESET_COLOUR;
    cout << "BEGIN! ";



    dicestore dice;

    int defend;

    while (mod.Phealth > 0) {




        dice.Modifier = 0;


        cout << YELLOW << "\nWhat do you want to do???\n\n";
        cout << YELLOW << "Your Health: " << RESET_COLOUR << mod.Phealth << INDENT << MAGENTA << "Enemies Health: " << mod.enemy_health << "\n\n" << RESET_COLOUR;
        cout << "1. Use your sword! (+2 mod) \n2. Use your Staff! (+1) \n3. Use your Desert eagle loaded with real bullets. (+9 mod)\n";
        cout << "4. Attempt to use your shield. \n5. Attempt to perform the matrix dodge. 6. whine to get your fathers attention\n";//defence options
        cin >> mod.Paction;
        if (mod.Paction == "1") {


            cout << "You wield the sword masterfully swinging it and slashing his torso whilst making whooshing noises with your mouth.\n";
            dice.Modifier = +2;
            dice.FullDamage = dice.Modifier + mod.Pdamage;
            ++mod.counting;
            _getch();
            system("cls");

        }
        else if (mod.Paction == "2") {


            cout << "You look intimidating swinging the stick slightly being mostly unaware of how to wield it.\n";
            dice.Modifier = +1;
            dice.FullDamage = dice.Modifier + mod.Pdamage;
            ++mod.counting;
            _getch();
            system("cls");
        }
        else if (mod.Paction == "3") {


            cout << "You shot him. oh my god.\n";
            dice.Modifier = +9;
            dice.FullDamage = dice.Modifier + mod.Pdamage;
            ++mod.counting;
            _getch();
            system("cls");
        }
        else if (mod.Paction == "4") {


            cout << "You raise your shield ready to block the oncoming " << YELLOW << "attacK!" << RESET_COLOUR;
            cout << "Rolling for your defence!";
            
            defend = +1;
            _getch();

        }
        else if (mod.Paction == "5") {

            cout << "oh my god. why are you like this? " << YELLOW << "*SIGH* " << RESET_COLOUR << "\n";
            //roll for dodge
            _getch();
        }
        else if (mod.Paction == "6") {

            cout << "Are you sure?\n";
            string confi;
            cin >> confi;
            if (confi == "y") {
                cout << "This is meant as a last resort....\n" << "So are you. " << YELLOW << " CERTAIN? " << RESET_COLOUR << "\n\n";
                cout << "y/n\n";
                string uhoh;
                cin >> uhoh;
                if (uhoh == "y") {
                    cout << "Ok then... \n";
                    system("cls");
                    RESET_COLOUR;
                    cout << "you squeal about how Phil is cheating and bullying you. \n  ";
                    cout << "The skies darken.\n The mud " << system("COLOR 04") << "Squealches " << RESET_COLOUR << "beneath efficient footsteps.\n\n";
                    cout << system("COLOR 05") << mod.Pname << RESET_COLOUR << " is this the...thing...bothering you?\n";
                    cout << "Your father pushes his glasses upwards with his index finger and presses a button on the side of his briefcase\n";
                    cout << "and places it on the ground, the briefcase lid flips open and 4 poles shoot out downwards lifting the case into the air\n";
                    cout << "turning it into a table, Your father, standing intimidatingly, his black suit and tie perfectly ironed and clean, and the\n";
                    cout << "look of determination drawn on his face. Takes a seat. on the air.\n";
                    cout << "Now sitting at his table he begins listing laws, and other things you dont quite hear as your head starts to buzz away\n";
                    cout << "from the sheer boringness of his talk, you pass out, the last thing you see being your father, sitting on nothing and slamming his fists on the table.\n";
                    cout << "You awake what seems like hours later (its been two days) and find a sticky note attached to your forehead\n\n";
                    cout << "Took care of them for you smoodgie make sure to drink lots of water and eat\n";
                    cout << "You feel something in your pockets and find a small bottle of water and crackers.\n";
                    cout << "you...win?\n +5xp +2xp[dependence] -2xp[Independence]\n\n";
                    mod.enemy_health = 0;
                    mod.dadusage = +1;
                    statsscreen();
                    _getch();
                    system("cls");
                    
                    
                    // this is too hard to do but implementing a system where father arriives and hes a lawyer and takes the specific enemy you're fighting
                    // to court and then accesses a function that makes a list of the history of the fight each move you and the enemy did,
                    // and then the lawyers present the case as your histoy e.g "the player [used sword and dealt 4 damage] towards my client 
                    // resulting in mr phil [defending 3points] and you have to somehow defend yourself using the fight history!
                    // that would be very dumb and easy to cheese from a player pov but idc i think thats fucking amazing lmao
                }
            }
        }


        srand(time(0));



        int Edie = rand() % 16;
        
        /*if (Edie >= 0 && mod.enemy_health > 0) {
            
            cout << "Phil decides to Strike!";
            cout << "Phil's Strike is so hot he uses it to " << YELLOW << "strike " << RESET_COLOUR << "up a friendly conversation!";


        }
        if (Edie == 17 && mod.enemy_health > 0) {


            cout << "This should be impossible if this has happened then something has gone horribly" << YELLOW << " HORRIBLY " << RESET_COLOUR << "wrong.";
        }*/



        //dice roll
        int diceroll = rand() % 21;
        int defenddie = rand() % 11;

        if (diceroll == 20) {
            cout << "NATRUAL 20! CRITICAL HIT!!!\n";
            cout << "THATS " << dice.Modifier + mod.Pdamage << " DAMAGE!!!";
            dice.Modifier = +20;
            system("pause");
            cout << "you win. goob job. he just wanted a cup of sugar.\n";
            cout << "i'll see you at the funeral.\n\n\n";
            cout << "asshole.";
            room1();
        }
        if (diceroll <= 1) {


            cout << "yikes....its a 1\n";
            mod.Pdamage = -3;
            _getch();
            cout << mod.counting << "\n";
            system("cls");


        }
        /*defenddie = dice.dicedefend;
        dice.dicedefend = diceroll / 3;*/




        int dicedam;
        dicedam = diceroll / 2;
        if (diceroll > 1 && defend == 0 && mod.enemy_health > 1) {
            cout << "\n\nROLLING! \n";
            cout << ". . .\n";
            cout << ". . . *drops die* ";
            cout << "got it sorry! heres the roll!: ";
        }
        cout << diceroll << "! \n";
        cout << "Adding your modifier and halving the dice number...you did  " << dice.FullDamage + dicedam << " DAMAGE!\n";
        /*cout << "And your defend die rolled a: " << dice.dicedefend << "\n";
        if (dice.dicedefend > 0) {


            cout << "You purposely deflected " << dice.dicedefend << " Damage!";


        }*/
        _getch();
        system("cls");
        cout << "Turn: " << mod.counting << "\n\n";
        int drain = dice.FullDamage + dicedam;
        mod.enemy_health -= drain;
        if (mod.enemy_health == 0 || mod.enemy_health < 0) {
            system("cls");
            system("COLOR 04");
            cout << "YOU WIN THEY DIED!!!!\n";
            cout << "You are enamoured with a ripe sense of crushing guilt.";
            cout << INDENT << YELLOW << "you gained?: -5XP" << RESET_COLOUR << "\n";


            system("exit");



        }


    }


}


void AsciiBank() {
    //Put Ascii int here to use throughout IF i want to.
    cout << "Eh.";


}




// rounds consist of sending a signal out once both parites have done an action send that to the for and loop



void Jungle(Inventory refe) {

    //keyword for refrence REFE

    cout << "You appear to be in a jungle of sorts?\n";
    cout << "The sight of remains and destroyed veichles and equipment litter the environment\n";
    cout << "To your right lies a frame of a 4x4 car \n and to your left is a sign that reads in giant letters\n";
    cout << YELLOW << "READ ME" << "\n So... What do you do?";



}










int main()
{
    //clearing the screen capabilties AND UNLOCKING MANY MORE OML 0O0
    DWORD dwMode = 0;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);





    Inventory inv;



    std::cout << TITLE << YELLOW << "Welcome, welcome to Zorq.\n" << RESET_COLOUR;
    cout << INDENT << "And " << YELLOW << "NO, " << RESET_COLOUR << "before you ask we have no association with the...ugh, 'game'" << YELLOW << " Zork.\n" << RESET_COLOUR;
    cout << INDENT << "They stole my design it was MY idea first and those freeloading pr**** stole it from me.\n";
    cout << INDENT << "So I dont want to hear it ok!? \n";
    cout << INDENT << "Anyways whats your " << MAGENTA << "name " << RESET_COLOUR << "huh?\n";
    cin >> inv.Pname;
    if (inv.Pname == "Ashley" || inv.Pname == "Ash") {


        cout << MAGENTA << INDENT << inv.Pname << RESET_COLOUR << INDENT << "...Thats...a thats a nice name, it suits you...\n";
        fight(inv);
    }
    else {
        cout << inv.Pname << "\n";
        cout << INDENT << "Oh wow I know a " << inv.Pname << "...anyway.";
        cout << " \nJust press a button or something I can see phil walking over...";
        _getch();
        system("cls");
        //fight(inv);
        Jungle(inv);
        string show;
        cin >> show;
        if (show == "teachershow") {
            fight(inv);
        }


    }


}
