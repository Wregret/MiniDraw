#pragma once
#include "Figure.h"
class Freehand :
	public Figure
{
public:
	Freehand();
	Freehand(QPainterPath paths);
	~Freehand();

	void Draw(QPainter &paint);

private:
	QPainterPath paths;
};

