/********************************************************************************
** Form generated from reading UI file 'qt_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_TEST_H
#define UI_QT_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_testClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_testClass)
    {
        if (qt_testClass->objectName().isEmpty())
            qt_testClass->setObjectName(QStringLiteral("qt_testClass"));
        qt_testClass->resize(600, 400);
        menuBar = new QMenuBar(qt_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        qt_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        qt_testClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qt_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qt_testClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qt_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qt_testClass->setStatusBar(statusBar);

        retranslateUi(qt_testClass);

        QMetaObject::connectSlotsByName(qt_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt_testClass)
    {
        qt_testClass->setWindowTitle(QApplication::translate("qt_testClass", "qt_test", 0));
    } // retranslateUi

};

namespace Ui {
    class qt_testClass: public Ui_qt_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_TEST_H
