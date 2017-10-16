#include "Line.h"



Line::Line()
{
}

Line::Line(int spx, int spy, int epx, int epy)
{
	startPointX = spx;
	startPointY = spy;
	endPointX = epx;
	endPointY = epy;
}

Line::~Line()
{
}

void Line::Draw(QPainter &paint)
{
	paint.drawLine(startPointX, startPointY, endPointX, endPointY);
}
