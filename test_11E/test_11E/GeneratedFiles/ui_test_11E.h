/********************************************************************************
** Form generated from reading UI file 'test_11E.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_11E_H
#define UI_TEST_11E_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MyWidget.h"

QT_BEGIN_NAMESPACE

class Ui_test_11EClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MyWidget *btnframe;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_11EClass)
    {
        if (test_11EClass->objectName().isEmpty())
            test_11EClass->setObjectName(QStringLiteral("test_11EClass"));
        test_11EClass->resize(600, 400);
        centralWidget = new QWidget(test_11EClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnframe = new MyWidget(centralWidget);
        btnframe->setObjectName(QStringLiteral("btnframe"));
        btnframe->setFrameShape(QFrame::StyledPanel);
        btnframe->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(btnframe);

        test_11EClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_11EClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        test_11EClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_11EClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_11EClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_11EClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_11EClass->setStatusBar(statusBar);

        retranslateUi(test_11EClass);

        QMetaObject::connectSlotsByName(test_11EClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_11EClass)
    {
        test_11EClass->setWindowTitle(QApplication::translate("test_11EClass", "test_11E", 0));
    } // retranslateUi

};

namespace Ui {
    class test_11EClass: public Ui_test_11EClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_11E_H
