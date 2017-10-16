#pragma once
#include "Figure.h"
class Oval :
	public Figure
{
public:
	Oval();
	Oval(int spx, int spy, int epx, int epy);
	~Oval();

	void Draw(QPainter &paint);

private:
	int startPointX;
	int startPointY;
	int endPointX;
	int endPointY;
};

