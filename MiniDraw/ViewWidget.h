#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include "ui_ViewWidget.h"
#include "Figure.h"
#include "Line.h"
#include "Oval.h"
#include "Rectangle.h"
#include "Polygon.h"
#include "Freehand.h"
#include<vector>

using namespace std;

class ViewWidget : public QWidget
{
	Q_OBJECT

public:
	ViewWidget(QWidget *parent = Q_NULLPTR);
	~ViewWidget();

	enum FigureType{kFreehand,kLine,kRectangle,kOval,kPolygon};
	vector<Figure*> figureArray;
	FigureType figureType=kFreehand;

	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);
	void mouseReleaseEvent(QMouseEvent* event);
	void paintEvent(QPaintEvent*);

public slots:
	void setFigureLine();
	void setFigureOval();
	void setFigureRectangle();
	void setFigurePolygon();
	void setFigureFreehand();
	void cancel();

private:
	Ui::ViewWidget ui;

	bool drawStatus;
	QPoint startPoint;
	QPoint endPoint;
	vector<Line>polygonTemp;
	QPoint polygonStartPoint;
	QPoint polygonFinalPoint;
	QPainterPath *path=NULL;
};
