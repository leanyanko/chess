#include "Cell.h"

Cell::Cell()
{
	pFig = nullptr; // ���� �� �������� �������� �� NULL
}

void Cell::changeFigure(Figure* fig)
{
	pFig = fig;
}