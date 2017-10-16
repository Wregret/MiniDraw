#pragma once
#include "Figure.h"
#include "Line.h"
#include <vector>
using namespace std;

class Polygon :
	public Figure
{
public:
	Polygon();
	Polygon(vector<Line>e);
	~Polygon();

	void Draw(QPainter &paint);

private:
	vector<Line> edges;
};

