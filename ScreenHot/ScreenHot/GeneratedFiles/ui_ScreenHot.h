/********************************************************************************
** Form generated from reading UI file 'ScreenHot.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENHOT_H
#define UI_SCREENHOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenHotClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *btnScreen;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnChange;
    QPushButton *btnRemove;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScreenHotClass)
    {
        if (ScreenHotClass->objectName().isEmpty())
            ScreenHotClass->setObjectName(QStringLiteral("ScreenHotClass"));
        ScreenHotClass->resize(600, 400);
        centralWidget = new QWidget(ScreenHotClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnScreen = new QListWidget(centralWidget);
        btnScreen->setObjectName(QStringLiteral("btnScreen"));

        verticalLayout->addWidget(btnScreen);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnChange = new QPushButton(centralWidget);
        btnChange->setObjectName(QStringLiteral("btnChange"));

        horizontalLayout->addWidget(btnChange);

        btnRemove = new QPushButton(centralWidget);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));

        horizontalLayout->addWidget(btnRemove);


        verticalLayout->addLayout(horizontalLayout);

        ScreenHotClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScreenHotClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        ScreenHotClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScreenHotClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScreenHotClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScreenHotClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScreenHotClass->setStatusBar(statusBar);

        retranslateUi(ScreenHotClass);

        QMetaObject::connectSlotsByName(ScreenHotClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenHotClass)
    {
        ScreenHotClass->setWindowTitle(QApplication::translate("ScreenHotClass", "ScreenHot", 0));
        btnChange->setText(QApplication::translate("ScreenHotClass", "\345\210\207\346\215\242\345\261\217\345\271\225", 0));
        btnRemove->setText(QApplication::translate("ScreenHotClass", "\347\247\273\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class ScreenHotClass: public Ui_ScreenHotClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENHOT_H
