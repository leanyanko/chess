#include "Chessboard.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Chessboard ch = Chessboard();
	ch.drawBoard();
	system("pause");

	while (true)
	{
		if (ch.makeTurn())
		{
			ch.changeTurn();
			ch.drawBoard();
		}
		else
		{
			cout << "Error. Wrong Turn. Try another" << endl;
		}
		
	}
}