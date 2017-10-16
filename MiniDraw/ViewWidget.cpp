#include "ViewWidget.h"
using namespace std;

ViewWidget::ViewWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	drawStatus = false;
}

ViewWidget::~ViewWidget()
{
	for (size_t i = 0; i < figureArray.size(); i++)
	{
		if (figureArray[i])
		{
			delete figureArray[i];
			figureArray[i] = NULL;
		}
	}
}

void ViewWidget::mousePressEvent(QMouseEvent* event)
{
	if (Qt::LeftButton == event->button())
	{
		if (drawStatus == false)
		{
			if (figureType == kPolygon)
			{
				setMouseTracking(true);
				polygonStartPoint = event->pos();
			}
			drawStatus = true;
			startPoint = endPoint = event->pos();
			if (figureType == kFreehand)
			{
				path = new QPainterPath;
				path->moveTo(event->pos());
			}
		}
	}
}

void ViewWidget::mouseMoveEvent(QMouseEvent* event)
{
	if (drawStatus)
	{
		endPoint = event->pos();
		if (figureType == kFreehand)
		{
			path->lineTo(event->pos());
		}
	}
}

void ViewWidget::mouseReleaseEvent(QMouseEvent* event)
{
	Figure* currentFigure = NULL;
	switch (figureType)
	{
	case kLine:
		currentFigure = new Line(startPoint.rx(), startPoint.ry(), endPoint.rx(), endPoint.ry());
		figureArray.push_back(currentFigure);
		drawStatus = false;
		break;
	case kOval:
		currentFigure = new Oval(startPoint.rx(), startPoint.ry(), endPoint.rx()-startPoint.rx(), endPoint.ry()-startPoint.ry());
		figureArray.push_back(currentFigure);
		drawStatus = false;
		break;
	case kRectangle:
		currentFigure = new Rectangle(startPoint.rx(), startPoint.ry(), endPoint.rx()-startPoint.rx(), endPoint.ry()-startPoint.ry());
		figureArray.push_back(currentFigure);
		drawStatus = false;
		break;
	case kPolygon:
		if (Qt::RightButton == event->button())
		{
			Line edge(polygonFinalPoint.rx(), polygonFinalPoint.ry(), polygonStartPoint.rx(),polygonStartPoint.ry());
			polygonTemp.push_back(edge);
			currentFigure = new Polygon(polygonTemp);
			figureArray.push_back(currentFigure);
			polygonTemp.clear();
			setMouseTracking(false);
			break;
		}
		else if(drawStatus==true)
		{
			polygonFinalPoint = endPoint;
			Line edge(startPoint.rx(), startPoint.ry(), endPoint.rx(), endPoint.ry());
			polygonTemp.push_back(edge);
			startPoint = endPoint = event->pos();
			return;
		}
	case kFreehand:
		currentFigure = new Freehand(*path);
		figureArray.push_back(currentFigure);
		delete path;
		path = NULL;
		break;
	default:
		break;
	}
	currentFigure = NULL;
	drawStatus = false;
}
void ViewWidget::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	for (size_t i = 0; i < figureArray.size(); i++)
	{
		figureArray[i]->Draw(painter);
	} 
	if (drawStatus)
	{
		switch (figureType)
		{
		case kLine:
			painter.drawLine(startPoint, endPoint);
			break;
		case kOval:
			painter.drawEllipse(startPoint.rx(), startPoint.ry(), endPoint.rx()-startPoint.rx(), endPoint.ry()-startPoint.ry());
			break;
		case kRectangle:
			painter.drawRect(startPoint.rx(), startPoint.ry(), endPoint.rx()-startPoint.rx(), endPoint.ry()-startPoint.ry());
			break;
		case kPolygon:
			painter.drawLine(startPoint, endPoint);
			for (size_t i = 0; i < polygonTemp.size(); i++)
				polygonTemp[i].Draw(painter);
		case kFreehand:
			if (path != NULL)
			{
				painter.drawPath(*path);
			}
			break;
		default:
			break;
		}
	}
	update();
}

void ViewWidget::cancel()
{
	if (!figureArray.empty())
	{
		figureArray.pop_back();
	}
}

void ViewWidget::setFigureFreehand()
{
	figureType = kFreehand;
}

void ViewWidget::setFigureLine()
{
	figureType = kLine;
}

void ViewWidget::setFigureOval()
{
	figureType = kOval;
}

void ViewWidget::setFigureRectangle()
{
	figureType = kRectangle;
}

void ViewWidget::setFigurePolygon()
{
	figureType = kPolygon;
}