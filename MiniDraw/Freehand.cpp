#include "Freehand.h"



Freehand::Freehand()
{
}

Freehand::Freehand(QPainterPath p)
{
	paths = p;
}

Freehand::~Freehand()
{
}

void Freehand::Draw(QPainter &paint)
{
	paint.drawPath(paths);
}