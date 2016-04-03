#pragma once
#include "Figure.h"
#include <iostream>

using namespace std;
class Pawn : public Figure
{
public:
	bool canMove(char x, char y);
	char getX();
	char getY();
	
	void setX(char X);
	void setY(char Y);
	
};

