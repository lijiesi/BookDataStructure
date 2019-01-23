/********************************************************************************
** Form generated from reading UI file 'test_12_3.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_12_3_H
#define UI_TEST_12_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_12_3Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_12_3Class)
    {
        if (test_12_3Class->objectName().isEmpty())
            test_12_3Class->setObjectName(QStringLiteral("test_12_3Class"));
        test_12_3Class->resize(600, 400);
        centralWidget = new QWidget(test_12_3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        test_12_3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_12_3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        test_12_3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_12_3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_12_3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_12_3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_12_3Class->setStatusBar(statusBar);

        retranslateUi(test_12_3Class);

        QMetaObject::connectSlotsByName(test_12_3Class);
    } // setupUi

    void retranslateUi(QMainWindow *test_12_3Class)
    {
        test_12_3Class->setWindowTitle(QApplication::translate("test_12_3Class", "test_12_3", 0));
    } // retranslateUi

};

namespace Ui {
    class test_12_3Class: public Ui_test_12_3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_12_3_H
