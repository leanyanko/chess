#include "Figure.h"

class Cell
{
private:
	Figure* pFig;

public:
	Cell();
	void changeFigure(Figure* fig);
};