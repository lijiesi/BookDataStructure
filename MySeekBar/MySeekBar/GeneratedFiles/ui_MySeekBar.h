/********************************************************************************
** Form generated from reading UI file 'MySeekBar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSEEKBAR_H
#define UI_MYSEEKBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "MyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MySeekBarClass
{
public:
    QWidget *centralWidget;
    MyWidget *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MySeekBarClass)
    {
        if (MySeekBarClass->objectName().isEmpty())
            MySeekBarClass->setObjectName(QStringLiteral("MySeekBarClass"));
        MySeekBarClass->resize(820, 462);
        centralWidget = new QWidget(MySeekBarClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new MyWidget(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(11, 335, 798, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MySeekBarClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MySeekBarClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 26));
        MySeekBarClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MySeekBarClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MySeekBarClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MySeekBarClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MySeekBarClass->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MySeekBarClass);

        QMetaObject::connectSlotsByName(MySeekBarClass);
    } // setupUi

    void retranslateUi(QMainWindow *MySeekBarClass)
    {
        MySeekBarClass->setWindowTitle(QApplication::translate("MySeekBarClass", "MySeekBar", 0));
        toolBar->setWindowTitle(QApplication::translate("MySeekBarClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MySeekBarClass: public Ui_MySeekBarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSEEKBAR_H
