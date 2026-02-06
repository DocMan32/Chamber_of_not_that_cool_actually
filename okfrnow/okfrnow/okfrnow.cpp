// okfrnow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "theheaderbro.h"
using namespace std;


int pathway1() {
    std::cout << " You are worthy. goodbye.";
    
    return 0;
}
int pathway2() {
    std::cout << " BYE.";
    return pathway1();
}

int main()
{

    

  
    
    std::cout << "Hello World!\n";
    std::cout << "do you say hi back?\n";
    std::string answer;
    std::cin >> answer;

    if (answer == "nope") {
        std::cout << "wow. rude man. rude.";
        pathway2();
    }
    else if (answer == "yeah") {
        std::cout << "HIII!!!!!";
        pathway1();
    }
    else if (answer == "1234") {
        
    }



    sizeof(int);

    sizeof(short);

    sizeof(long);







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
