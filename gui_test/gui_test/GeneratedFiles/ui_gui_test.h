/********************************************************************************
** Form generated from reading UI file 'gui_test.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_TEST_H
#define UI_GUI_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_testClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *gui_testClass)
    {
        if (gui_testClass->objectName().isEmpty())
            gui_testClass->setObjectName(QStringLiteral("gui_testClass"));
        gui_testClass->resize(600, 400);
        centralWidget = new QWidget(gui_testClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok = new QPushButton(centralWidget);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        gui_testClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(gui_testClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        gui_testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(gui_testClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        gui_testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(gui_testClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        gui_testClass->setStatusBar(statusBar);

        retranslateUi(gui_testClass);

        QMetaObject::connectSlotsByName(gui_testClass);
    } // setupUi

    void retranslateUi(QMainWindow *gui_testClass)
    {
        gui_testClass->setWindowTitle(QApplication::translate("gui_testClass", "gui_test", 0));
        ok->setText(QApplication::translate("gui_testClass", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class gui_testClass: public Ui_gui_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_TEST_H
