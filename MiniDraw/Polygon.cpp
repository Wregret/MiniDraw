#include "Polygon.h"



Polygon::Polygon()
{
}

Polygon::Polygon(vector<Line>e)
{
	edges = e;
}

Polygon::~Polygon()
{
}

void Polygon::Draw(QPainter &paint)
{
	if (!edges.empty())
	{
		for (size_t i = 0; i < edges.size(); i++)
		{
			edges[i].Draw(paint);
		}
	}
}