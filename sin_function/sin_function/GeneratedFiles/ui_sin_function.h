/********************************************************************************
** Form generated from reading UI file 'sin_function.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIN_FUNCTION_H
#define UI_SIN_FUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "MyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_sin_functionClass
{
public:
    QWidget *centralWidget;
    MyWidget *btnframe;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *btn_period;
    QLabel *label_2;
    QSpinBox *btn_radius;
    QLabel *label_3;
    QSpinBox *btn_grain;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *sin_functionClass)
    {
        if (sin_functionClass->objectName().isEmpty())
            sin_functionClass->setObjectName(QStringLiteral("sin_functionClass"));
        sin_functionClass->resize(600, 400);
        centralWidget = new QWidget(sin_functionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnframe = new MyWidget(centralWidget);
        btnframe->setObjectName(QStringLiteral("btnframe"));
        btnframe->setGeometry(QRect(0, 64, 600, 271));
        btnframe->setFrameShape(QFrame::StyledPanel);
        btnframe->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 22, 312, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        btn_period = new QSpinBox(layoutWidget);
        btn_period->setObjectName(QStringLiteral("btn_period"));
        btn_period->setValue(20);

        horizontalLayout->addWidget(btn_period);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        btn_radius = new QSpinBox(layoutWidget);
        btn_radius->setObjectName(QStringLiteral("btn_radius"));
        btn_radius->setValue(10);

        horizontalLayout->addWidget(btn_radius);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        btn_grain = new QSpinBox(layoutWidget);
        btn_grain->setObjectName(QStringLiteral("btn_grain"));
        btn_grain->setValue(1);

        horizontalLayout->addWidget(btn_grain);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sin_functionClass->setCentralWidget(centralWidget);
        layoutWidget->raise();
        btnframe->raise();
        menuBar = new QMenuBar(sin_functionClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        sin_functionClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(sin_functionClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sin_functionClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(sin_functionClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        sin_functionClass->setStatusBar(statusBar);

        retranslateUi(sin_functionClass);

        QMetaObject::connectSlotsByName(sin_functionClass);
    } // setupUi

    void retranslateUi(QMainWindow *sin_functionClass)
    {
        sin_functionClass->setWindowTitle(QApplication::translate("sin_functionClass", "sin_function", 0));
        label->setText(QApplication::translate("sin_functionClass", "\345\221\250\346\234\237", 0));
        label_2->setText(QApplication::translate("sin_functionClass", "\345\271\205\345\272\246", 0));
        label_3->setText(QApplication::translate("sin_functionClass", "\347\262\222\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class sin_functionClass: public Ui_sin_functionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIN_FUNCTION_H
