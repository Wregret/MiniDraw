#include "Rectangle.h"



Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(int spx, int spy, int epx, int epy)
{
	startPointX = spx;
	startPointY = spy;
	endPointX = epx;
	endPointY = epy;
}

void Rectangle::Draw(QPainter &paint)
{
	paint.drawRect(startPointX, startPointY, endPointX, endPointY);
}