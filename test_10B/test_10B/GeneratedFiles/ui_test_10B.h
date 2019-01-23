/********************************************************************************
** Form generated from reading UI file 'test_10B.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_10B_H
#define UI_TEST_10B_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_10BClass
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSetting;
    QAction *actionHelp;
    QAction *actionOpen;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *mytext;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_3;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_10BClass)
    {
        if (test_10BClass->objectName().isEmpty())
            test_10BClass->setObjectName(QStringLiteral("test_10BClass"));
        test_10BClass->resize(698, 388);
        actionNew = new QAction(test_10BClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/test_10B/Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(test_10BClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/test_10B/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSetting = new QAction(test_10BClass);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/test_10B/Resources/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetting->setIcon(icon2);
        actionHelp = new QAction(test_10BClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/test_10B/Resources/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionOpen = new QAction(test_10BClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/test_10B/Resources/oepn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        centralWidget = new QWidget(test_10BClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mytext = new QPlainTextEdit(centralWidget);
        mytext->setObjectName(QStringLiteral("mytext"));

        verticalLayout->addWidget(mytext);

        test_10BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_10BClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_3 = new QMenu(menu);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        test_10BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_10BClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_10BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_10BClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_10BClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionSave);
        menu->addAction(actionOpen);
        menu->addAction(menu_3->menuAction());
        menu_3->addAction(actionSetting);
        menu_3->addAction(actionHelp);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSetting);
        mainToolBar->addAction(actionHelp);
        mainToolBar->addSeparator();

        retranslateUi(test_10BClass);

        QMetaObject::connectSlotsByName(test_10BClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_10BClass)
    {
        test_10BClass->setWindowTitle(QApplication::translate("test_10BClass", "test_10B", 0));
        actionNew->setText(QApplication::translate("test_10BClass", "\346\226\260\345\273\272", 0));
        actionSave->setText(QApplication::translate("test_10BClass", "\344\277\235\345\255\230", 0));
        actionSetting->setText(QApplication::translate("test_10BClass", "\350\256\276\347\275\256", 0));
        actionHelp->setText(QApplication::translate("test_10BClass", "\345\270\256\345\212\251", 0));
        actionOpen->setText(QApplication::translate("test_10BClass", "\346\211\223\345\274\200", 0));
        menu->setTitle(QApplication::translate("test_10BClass", "\346\226\207\346\234\254", 0));
        menu_3->setTitle(QApplication::translate("test_10BClass", "\345\205\266\345\256\203", 0));
        menu_2->setTitle(QApplication::translate("test_10BClass", "\345\205\266\345\256\203", 0));
    } // retranslateUi

};

namespace Ui {
    class test_10BClass: public Ui_test_10BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_10B_H
