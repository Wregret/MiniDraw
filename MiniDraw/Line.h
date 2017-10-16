#pragma once
#include "Figure.h"
class Line :
	public Figure
{
public:
	Line();
	Line(int startPointX, int startPointY, int endPointX, int endPointY);
	~Line();

	void Draw(QPainter &paint);

private:
	int startPointX;
	int startPointY;
	int endPointX;
	int endPointY;
};

