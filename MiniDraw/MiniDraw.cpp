#include "MiniDraw.h"

MiniDraw::MiniDraw(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	viewWidget = new ViewWidget();
	connect(ui.actionLine, SIGNAL(triggered()), viewWidget, SLOT(setFigureLine()));
	connect(ui.actionOval, SIGNAL(triggered()), viewWidget, SLOT(setFigureOval()));
	connect(ui.actionRectangle, SIGNAL(triggered()), viewWidget, SLOT(setFigureRectangle()));
	connect(ui.actionPolygon, SIGNAL(triggered()), viewWidget, SLOT(setFigurePolygon()));
	connect(ui.actionFreehand, SIGNAL(triggered()), viewWidget, SLOT(setFigureFreehand()));
	connect(ui.actionCancel, SIGNAL(triggered()), viewWidget, SLOT(cancel()));
	setCentralWidget(viewWidget);
}
