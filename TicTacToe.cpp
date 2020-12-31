/*
Zachariah Kline
30 DEC 2020
Tic Tac Toe:)
*/

#include "game_definition.h"

using namespace std;

char c[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };

void clear_output() {
	system("cls");
}

void pauses(int seconds) {
	// This doesnt really do anything for the game, but increase dramatic effect
	this_thread::sleep_for(chrono::seconds(seconds));
}

void welcome_screen() {
	cout << "\n\n                             WELCOME TO TIC TAC TOE\n\n";
	pauses(2);
	cout << "                              WHO IS READY TO DIE?\n\n";
	pauses(2);
	cout << "                     DECIDE WHO IS PLAYER ONE AND PLAYER TWO";
}

void print_board() {

	cout << "               |                   |\n";
	cout << "               |                   |\n";
	cout << "               |                   |\n";
	cout << "       1       |         2         |       3\n";
	cout << "       " << c[0] << "       |         " << c[1] << "         |       " << c[2] << "\n";
	cout << "               |                   |\n";
	cout << "_______________|___________________|______________\n";
	cout << "               |                   |\n";
	cout << "               |                   |\n";
	cout << "               |                   |\n";
	cout << "       4       |         5         |       6\n";
	cout << "       " << c[3] << "       |         " << c[4] << "         |       " << c[5] << "\n";
	cout << "               |                   |\n";
	cout << "_______________|___________________|______________\n";
	cout << "               |                   |\n";
	cout << "               |                   |\n";
	cout << "       7       |         8         |       9\n";
	cout << "       " << c[6] << "       |         " << c[7] << "         |       " << c[8] << "\n";
	cout << "               |                   |\n";
	cout << "               |                   |\n";
}

void player_1_move() {
	// Modifies the array to show where player 1 put an X
	cout << "\nPlayer ONE, on what tile do you want to place your X?\n";

	int player_1_choice;
	cin >> player_1_choice;

	switch (player_1_choice) {
	case 1:
		c[0] = 'X';
		break;
	case 2:
		c[1] = 'X';
		break;
	case 3:
		c[2] = 'X';
		break;
	case 4:
		c[3] = 'X';
		break;
	case 5:
		c[4] = 'X';
		break;
	case 6:
		c[5] = 'X';
		break;
	case 7:
		c[6] = 'X';
		break;
	case 8:
		c[7] = 'X';
		break;
	case 9:
		c[8] = 'X';
		break;
	}
}

void player_2_move() {
	// Modifies the array to show where player 2 put an O
	cout << "\nPlayer TWO, on what tile do you want to place your O?\n";

	int player_2_choice;
	cin >> player_2_choice;

	switch (player_2_choice) {
	case 1:
		c[0] = 'O';
		break;
	case 2:
		c[1] = 'O';
		break;
	case 3:
		c[2] = 'O';
		break;
	case 4:
		c[3] = 'O';
		break;
	case 5:
		c[4] = 'O';
		break;
	case 6:
		c[5] = 'O';
		break;
	case 7:
		c[6] = 'O';
		break;
	case 8:
		c[7] = 'O';
		break;
	case 9:
		c[8] = 'O';
		break;
	}
}

void winP1() {
	// Checks all possibilities of player 1 winning
	if (c[0] =='X' && c[1] == 'X' && c[2] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[3] == 'X' && c[4] == 'X' && c[5] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[6] == 'X' && c[7] == 'X' && c[8] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[0] == 'X' && c[3] == 'X' && c[6] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[1] == 'X' && c[4] == 'X' && c[7] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[2] == 'X' && c[5] == 'X' && c[8] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[0] == 'X' && c[4] == 'X' && c[8] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[2] == 'X' && c[4] == 'X' && c[6] == 'X') {
		cout << "\nPLAYER ONE WINS!\nPLAYER TWO IS A LOSER\n\n";
		repeat_game();
	}
}

void winP2() {
	// Checks all possibilities of player 2 winning
	if (c[0] == 'O' && c[1] == 'O' && c[2] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[3] == 'O' && c[4] == 'O' && c[5] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[6] == 'O' && c[7] == 'O' && c[8] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[0] == 'O' && c[3] == 'O' && c[6] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[1] == 'O' && c[4] == 'O' && c[7] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[2] == 'O' && c[5] == 'O' && c[8] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[0] == 'O' && c[4] == 'O' && c[8] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
	else if (c[2] == 'O' && c[4] == 'O' && c[6] == 'O') {
		cout << "\nPLAYER TWO WINS!\nPLAYER ONE IS A LOSER\n\n";
		repeat_game();
	}
}

void repeat_game() {
	// For the user to exit or play again properly
	cout << "Would you like to play again (enter 'y' or 'n')? ";
	char repeat{};
	cin >> repeat;
	if (repeat == 'y' || repeat == 'Y') {
		clear_board();
		run_game();
	}
	else if (repeat == 'n' || repeat == 'N') {
		clear_output();
		cout << "Thanks for playing!\n\n";
		exit(0);
	}
	else {
		cout << "Invalid Key" << "\n\n";
		repeat_game();
	}
}

void clear_board() {
	// When someone wants to play again array c is still modified with user input and needs to be cleared
	c[0] = ' ';
	c[1] = ' ';
	c[2] = ' ';
	c[3] = ' ';
	c[4] = ' ';
	c[5] = ' ';
	c[6] = ' ';
	c[7] = ' ';
	c[8] = ' ';
}

void tie() {
	// This checks the array if there is a tie
	if (c[0] != ' ' && c[1] != ' ' && c[2] != ' ' && c[3] != ' ' && c[4] != ' ' && c[5] != ' ' && c[6] != ' ' && c[7] != ' ' && c[8] != ' ') {
		clear_output();
		cout << "TIE GAME!\n\n";
		repeat_game();
	}
}

void run_game() {
	clear_output();
	welcome_screen();
	pauses(3);
	clear_output();
	while (true) {
		print_board();
		player_1_move();
		winP1();
		tie();
		print_board();
		clear_output();
		print_board();
		player_2_move();
		winP2();
		print_board();
		clear_output();
	}
}