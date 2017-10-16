#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MiniDraw.h"
#include "ViewWidget.h"

class MiniDraw : public QMainWindow
{
	Q_OBJECT

public:
	MiniDraw(QWidget *parent = Q_NULLPTR);
	void MiniDraw::Init()
	{

	}

private:
	Ui::MiniDrawClass ui;

	ViewWidget* viewWidget;
};
