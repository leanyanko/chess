#pragma once
#include "Pawn.h"
#include "Cell.h"
#include <string.h>
#include <string>

class Chessboard
{
private:
	Pawn whitePawns[8]; 
	Pawn blackPawns[8];

	Cell board[8][8];
	int turnX1;
	char turnY1;
	int turnX;
	int turnY;
	string turn;

	bool whoseTurn; // true = WHITE, false = BLACK

public:
	Chessboard();
	void drawBoard();
	bool makeTurn();

	bool getWhoseTurn();
	void changeTurn();
	bool isCellEmpty(char x, char y);
};

