#pragma once

class Figure
{
protected:
	char x;
	char y;
	bool color;
	bool isAlive;

public:
	bool move(char x, char y);
	void setColor(bool c);
};

