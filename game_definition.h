#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include "stdlib.h"
using namespace std;


void clear_output();

void pauses(int seconds);

void welcome_screen();

void print_board();

void player_1_move();

void player_2_move();

void winP1();

void winP2();

void repeat_game();

void clear_board();

void tie();

void run_game();