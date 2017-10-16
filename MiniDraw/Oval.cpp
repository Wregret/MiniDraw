#include "Oval.h"



Oval::Oval()
{
}


Oval::~Oval()
{
}

Oval::Oval(int spx, int spy, int epx, int epy)
{
	startPointX = spx;
	startPointY = spy;
	endPointX = epx;
	endPointY = epy;
}

void Oval::Draw(QPainter &paint)
{
	paint.drawEllipse(startPointX, startPointY, endPointX, endPointY);
}
