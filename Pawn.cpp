#include "Pawn.h"
#include <cmath>


bool Pawn::canMove(char X, char Y)
{	
	if ( ((Y - y) == 1 && color == true) || ( (Y - y) == -1 && color == false) )
	{		
		return true;
	}
	else
	{
		return false;
	}

}

char Pawn::getX()
{
	return x;
}

char Pawn::getY()
{
	return y;
}

void Pawn::setX(char X)
{
	x = X;
}

void Pawn::setY(char Y)
{
	y = Y;
}