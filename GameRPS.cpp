// GameRPS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {

	cout << "-------------------------------------------------------------" << endl;
	cout << "-------------Lets play ROCK PAPER SICSSOR game --------------" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "" << endl;

	// Create a player profile with player name and level
	cout << "============ PLAYER PROFILE ============" << endl;
	cout << " " << endl;
	string player_name;
	cout << "Enter Player's Name : ";
	cin >> player_name;
	cout << " " << endl;

	// Level for player profile
	int play_levels;
	cout << player_name  << "" << " How Many Levels You Want to Play? Level : 1,5,11,21,100 =  ";
	cin >> play_levels;
	cout << " " << endl;

	// player score & computer score
	int player_score = 0, computer_score = 0;
	for (int level = 1; level <= play_levels; level++) {
		

		// No of Levels and Players Scores
		int player_choice, computer_choice;

		cout << "************* ROCK PAPER SICSSOR ************" << endl;
		cout << " " << endl;
		cout << "No of Level :  " << level << "/" << play_levels << endl;
		cout <<"" << player_name << " 's  Score = " << player_score << endl;
		cout << "Computer Score = " << computer_score << endl;

		// select your choice
		cout << "1. Rock " << endl;
		cout << "2. Paper " << endl;
		cout << "3. Scissor" << endl; 
		cout << " " << endl;

		do {
			cout << " Select Your Choice :  " ;
			cin >> player_choice;

		// if player enter not between 1 or 2 or 3 
		} while (player_choice != 1 && player_choice != 2 && player_choice != 3);

		//Generate the random numbers from computer
		srand(time(0));
		computer_choice = (rand() % 3) + 1;

		// player input a number among 1 or 2 or 3 and player score of the current level
		if (player_choice == 1 && computer_choice == 3) {
			cout << player_name << " Win this level ! - Rock can smash Scissor "  << endl;
			cout << "Computer Loss this level " << endl;
			player_score++;
			cout << " " << endl;
		}

		else if (player_choice == 2 && computer_choice == 1) {
			cout << player_name << " Win this level ! - Paper can cover the Rock "  << endl;
			cout << "Computer Loss this level " << endl;
			player_score++;
			cout << " " << endl;
		}

		else if (player_choice == 3 && computer_choice == 2) {
			cout << player_name << " Win this level ! - Scissor can cut paper "  << endl;
			cout << "Computer Loss this level " << endl;
			player_score++;
			cout << " " << endl;
		}

		// If Player and Computer choice same 
		else if (player_choice == computer_choice) {
			cout << " It's Tie ! "  << endl;
			cout << " " << endl;	
		}

		// If Computer win the level
		else {
			cout << " Computer Win the this level" << endl;
			cout << player_name << " loss this level" << endl;
			computer_score++;
			cout << " " << endl;
		}

	}
	 
	// If  two player's socres are same
	if (computer_score == player_score) {
		cout << "Game is Tie ! " << endl;
	}

	// If player is top scorerer and Winner of the Game
	else if (player_score > computer_score) {
		cout << "CONGRAGULATIONS!!!" << " " << player_name << " " << " is a Top Scorer & Winner of the Game " << endl;
	}

	// If computer is top scorerer and  Winner of the Game
	else {
		cout << " CONGRAGULATIONS!!! Computer is a Top Scorer & Winner of the Game  "  << endl;
	}

	// Final Scores of the two players 
	cout << "" << endl;
	cout << "---------- Two player's final Scores  --------- " << endl;
	cout << "" << endl;
	cout << player_name  << " 's Score = " << player_score++ << endl;
	cout << "Computer Score = " << computer_score << endl;

	cout << "" << endl;
	cout << "..................THANK YOU FOR PLAYING THIS GAME.................." << endl;

	return 0;
}
