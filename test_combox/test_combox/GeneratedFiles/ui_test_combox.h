/********************************************************************************
** Form generated from reading UI file 'test_combox.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_COMBOX_H
#define UI_TEST_COMBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_test_comboxClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *btn_combox;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_ok;
    QPlainTextEdit *plain_text;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_comboxClass)
    {
        if (test_comboxClass->objectName().isEmpty())
            test_comboxClass->setObjectName(QStringLiteral("test_comboxClass"));
        test_comboxClass->resize(600, 400);
        centralWidget = new QWidget(test_comboxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_combox = new QComboBox(centralWidget);
        btn_combox->setObjectName(QStringLiteral("btn_combox"));
        btn_combox->setEditable(true);

        verticalLayout->addWidget(btn_combox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btn_ok = new QPushButton(centralWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        verticalLayout->addWidget(btn_ok);


        horizontalLayout->addLayout(verticalLayout);

        plain_text = new QPlainTextEdit(centralWidget);
        plain_text->setObjectName(QStringLiteral("plain_text"));

        horizontalLayout->addWidget(plain_text);

        test_comboxClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_comboxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        test_comboxClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_comboxClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_comboxClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_comboxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_comboxClass->setStatusBar(statusBar);

        retranslateUi(test_comboxClass);

        QMetaObject::connectSlotsByName(test_comboxClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_comboxClass)
    {
        test_comboxClass->setWindowTitle(QApplication::translate("test_comboxClass", "test_combox", 0));
        btn_ok->setText(QApplication::translate("test_comboxClass", "ok", 0));
    } // retranslateUi

};

namespace Ui {
    class test_comboxClass: public Ui_test_comboxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_COMBOX_H
