/********************************************************************************
** Form generated from reading UI file 'MiniDraw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIDRAW_H
#define UI_MINIDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MiniDrawClass
{
public:
    QAction *actionLine;
    QAction *actionRectangle;
    QAction *actionOval;
    QAction *actionPolygon;
    QAction *actionCancel;
    QAction *actionFreehand;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MiniDrawClass)
    {
        if (MiniDrawClass->objectName().isEmpty())
            MiniDrawClass->setObjectName(QStringLiteral("MiniDrawClass"));
        MiniDrawClass->resize(600, 400);
        actionLine = new QAction(MiniDrawClass);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        actionRectangle = new QAction(MiniDrawClass);
        actionRectangle->setObjectName(QStringLiteral("actionRectangle"));
        actionOval = new QAction(MiniDrawClass);
        actionOval->setObjectName(QStringLiteral("actionOval"));
        actionPolygon = new QAction(MiniDrawClass);
        actionPolygon->setObjectName(QStringLiteral("actionPolygon"));
        actionCancel = new QAction(MiniDrawClass);
        actionCancel->setObjectName(QStringLiteral("actionCancel"));
        actionFreehand = new QAction(MiniDrawClass);
        actionFreehand->setObjectName(QStringLiteral("actionFreehand"));
        centralWidget = new QWidget(MiniDrawClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MiniDrawClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MiniDrawClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MiniDrawClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MiniDrawClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MiniDrawClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MiniDrawClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MiniDrawClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        mainToolBar->addAction(actionLine);
        mainToolBar->addAction(actionRectangle);
        mainToolBar->addAction(actionOval);
        mainToolBar->addAction(actionPolygon);
        mainToolBar->addAction(actionFreehand);
        mainToolBar->addAction(actionCancel);

        retranslateUi(MiniDrawClass);

        QMetaObject::connectSlotsByName(MiniDrawClass);
    } // setupUi

    void retranslateUi(QMainWindow *MiniDrawClass)
    {
        MiniDrawClass->setWindowTitle(QApplication::translate("MiniDrawClass", "MiniDraw", Q_NULLPTR));
        actionLine->setText(QApplication::translate("MiniDrawClass", "Line", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionLine->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRectangle->setText(QApplication::translate("MiniDrawClass", "Rectangle", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRectangle->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOval->setText(QApplication::translate("MiniDrawClass", "Oval", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionOval->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPolygon->setText(QApplication::translate("MiniDrawClass", "Polygon", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPolygon->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCancel->setText(QApplication::translate("MiniDrawClass", "Cancel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCancel->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionFreehand->setText(QApplication::translate("MiniDrawClass", "Freehand", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionFreehand->setShortcut(QApplication::translate("MiniDrawClass", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        menu->setTitle(QApplication::translate("MiniDrawClass", "\345\205\263\344\272\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MiniDrawClass: public Ui_MiniDrawClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIDRAW_H
