/*
Zachariah Kline
30 DEC 2020
Tic Tac Toe:)
*/

#include "game_definition.h"
using namespace std;

int main() {
	try {
		run_game();
	}
	catch (runtime_error& a) {
		cerr << a.what();
	}
}