#pragma once
#include<QPainter>
class Figure
{
public:
	Figure();
	virtual void Draw(QPainter &paint);
	virtual ~Figure();

	
};

