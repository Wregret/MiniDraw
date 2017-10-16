#pragma once
#include "Figure.h"
class Rectangle :
	public Figure
{
public:
	Rectangle();
	Rectangle(int spx, int spy, int epx, int epy);
	~Rectangle();

	void Draw(QPainter &paint);

private:
	int startPointX;
	int startPointY;
	int endPointX;
	int endPointY;
};

