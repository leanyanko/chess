#include "Cell.h"

Cell::Cell()
{
	pFig = nullptr; // если не работает заменяем на NULL
}

void Cell::changeFigure(Figure* fig)
{
	pFig = fig;
}