#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <iostream>
#include "player.h"
#include "board.h"
using namespace std;

class gameManager
{
	private:
		board b;
		player player1;
		player player2;
		char sym1;
		char sym2;
	public:
		gameManager();
		gameManager(player p1, player p2, char symbol1, char symbol2);
		void init();
		void turn(char sym);
		void play();
		char checkWin();
	protected:
};

#endif
