// Battleship_FINAL_CIS150.cpp : Defines the entry point for the console application.
//
//
//
//==================================_BOATS_AND_CODES_=======================================\
//Captain: Alec Schmidt
//First Mate: Kris Kurtansky
//Lead Deckhand: Avery Haynes
//Deck Hand: Kyle Henderson

#include "stdafx.h"
#include "iostream"
#include "string"
#include "windows.h"

using namespace std;

void push(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << " ";
	}
}

int main()
{
	char StartGame;
	for (int i = 0; i < 50; i++)
	{
		system("CLS");
		push(i);

		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- WELCOME TO BATTLESHIP -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl << endl << endl << endl;
		cout << "===========OBJECTIVE==========" << endl;
		cout << "The objective of the game is to sink all of your opponent ships." << endl << endl;
		cout << "============RULES=============" << endl;
		cout << "Each player will place their ships on the board. The ships can be placed in a vetical of horizontal orientation." << endl;
		cout << "Placing a ship diagonally is NOT ALLOWED." << endl << endl;
		cout << "The players will then take turns at guessing locations on the board to sink the enemy's ships." << endl;
		cout << "Whoever sinks all ships first wins." << endl << endl << endl << endl;
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << endl;
		Sleep(100);
	}
	cout << "Do you want to play? [Y]es or [N]o: ";
	cin >> StartGame;

	cout << endl;

	while (StartGame != 'Y' && StartGame != 'N' && StartGame != 'n' && StartGame != 'y')
	{
		cout << "You did not enter a valid response. Now I will ask again. " << endl;
		cout << "Enter Y if you want to play.|Enter N if you do not." << endl;
		cout << "I really can't make this any clearer.";
		cin >> StartGame;
	}

	if (StartGame == 'Y' || StartGame == 'y')
	{
		cout << "yes" << endl;
	}
	if (StartGame == 'N' || StartGame == 'n')
	{
		cout << "Thanks for not playing game. K Bye.";
	}





	system("pause");

	return 0;
}

