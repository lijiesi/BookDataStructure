/********************************************************************************
** Form generated from reading UI file 'test_7_4A.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_7_4A_H
#define UI_TEST_7_4A_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_7_4AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnStart;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *btnPlain;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_7_4AClass)
    {
        if (test_7_4AClass->objectName().isEmpty())
            test_7_4AClass->setObjectName(QStringLiteral("test_7_4AClass"));
        test_7_4AClass->resize(835, 455);
        centralWidget = new QWidget(test_7_4AClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));

        horizontalLayout->addWidget(btnStart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        btnPlain = new QPlainTextEdit(centralWidget);
        btnPlain->setObjectName(QStringLiteral("btnPlain"));

        verticalLayout->addWidget(btnPlain);

        test_7_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_7_4AClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 835, 26));
        test_7_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_7_4AClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_7_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_7_4AClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_7_4AClass->setStatusBar(statusBar);

        retranslateUi(test_7_4AClass);

        QMetaObject::connectSlotsByName(test_7_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_7_4AClass)
    {
        test_7_4AClass->setWindowTitle(QApplication::translate("test_7_4AClass", "test_7_4A", 0));
        btnStart->setText(QApplication::translate("test_7_4AClass", "\345\274\200\345\247\213\346\220\234\347\264\242", 0));
    } // retranslateUi

};

namespace Ui {
    class test_7_4AClass: public Ui_test_7_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_7_4A_H
