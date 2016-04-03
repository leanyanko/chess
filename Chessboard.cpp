#include "Chessboard.h"
#include <iomanip>


Chessboard::Chessboard()
{
	int k = 0;
	for (char i = 'a'; i <= 'h'; i++, k++)
	{
		whitePawns[k].setX(i);
		whitePawns[k].setY('2');		
		whitePawns[k].setColor(true);
		board[2][k].changeFigure(&whitePawns[k]);

		blackPawns[k].setX(i);
		blackPawns[k].setY('7');
		blackPawns[k].setColor(false);
		board[7][k].changeFigure(&blackPawns[k]);
	}

	whoseTurn = true;
}

void Chessboard::drawBoard()
{
	for (char i = '1'; i <= '8'; i++)
	{		
		for (char j = 'a'; j <= 'h'; j++)
		{			
			for (int k = 0; k < 8; k++)
			{
				if (j == whitePawns[k].getX() && i == whitePawns[k].getY() )
				{
					cout << setw(3) << "Wp";
					break;
				}

				if (j == blackPawns[k].getX() && i == blackPawns[k].getY() )
				{
					cout << setw(3) << "Bp";
					break;
				}

				if (k == 7)
				{
					cout << setw(3) << ".";
					break;
				}
			}

			
		}
		cout << endl;
	}
}

bool Chessboard::getWhoseTurn()
{
	return whoseTurn;
}

void Chessboard::changeTurn()
{
	whoseTurn = !whoseTurn;
}

bool Chessboard::isCellEmpty(char x, char y)
{
	for (int i = 0; i < 8; i++)
	{
		if (whitePawns[i].getX() == x && whitePawns[i].getY() == y)
		{
			return false;
		}

		if (blackPawns[i].getX() == x && blackPawns[i].getY() == y)
		{
			return false;
		}
	}

	return true;
}

bool Chessboard::makeTurn()
{	
	cin >> turn;
	if (turn.length() == 5)
	{
		if ((turn[0] >= 'a' && turn[0] <= 'h') && (turn[3] >= 'a' && turn[3] <= 'h') )
		{			
				if ( (turn[1] >= '1' && turn[1] <= '8') && (turn[4] >= '1' && turn[4] <= '8') )
				{	
					if (whoseTurn == true)
					{
						for (int i = 0; i <= 8; i++)
						{							
							if (turn[0] == whitePawns[i].getX() && turn[1] == whitePawns[i].getY())
							{								
								if (whitePawns[i].canMove(turn[3], turn[4]))
								{
									if (isCellEmpty(turn[3], turn[4]) )
									{
										whitePawns[i].setX(turn[3]);
										whitePawns[i].setY(turn[4]);
										return true;
									}
								}

								cout << "Пешка так не ест" << endl;
								return false;
							}
						}						
						return false;
					}
					else
					{
						for (int i = 0; i <= 8; i++)
						{
							if (turn[0] == blackPawns[i].getX() && turn[1] == blackPawns[i].getY())
							{
								if (blackPawns[i].canMove(turn[3], turn[4]))
								{
									if (isCellEmpty(turn[3], turn[4]))
									{
										blackPawns[i].setX(turn[3]);
										blackPawns[i].setY(turn[4]);
										return true;
									}
								}

								cout << "Пешка так не ест" << endl;
								return false;
							}
						}						

						return false;
					}

				}
				else
				{
					return false;
				}			
		}
		else
			return false;
	}
	else
		return false;

	
}


