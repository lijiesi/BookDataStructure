/********************************************************************************
** Form generated from reading UI file 'test_label.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_LABEL_H
#define UI_TEST_LABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_labelClass
{
public:
    QWidget *centralWidget;
    QLabel *ok_label;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_labelClass)
    {
        if (test_labelClass->objectName().isEmpty())
            test_labelClass->setObjectName(QStringLiteral("test_labelClass"));
        test_labelClass->resize(600, 400);
        centralWidget = new QWidget(test_labelClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ok_label = new QLabel(centralWidget);
        ok_label->setObjectName(QStringLiteral("ok_label"));
        ok_label->setGeometry(QRect(100, 10, 271, 31));
        ok_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"\346\245\267\344\275\223\";\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 381, 261));
        label->setPixmap(QPixmap(QString::fromUtf8(":/test_label/123.jpg")));
        label->setScaledContents(true);
        test_labelClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_labelClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        test_labelClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_labelClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_labelClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_labelClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_labelClass->setStatusBar(statusBar);

        retranslateUi(test_labelClass);

        QMetaObject::connectSlotsByName(test_labelClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_labelClass)
    {
        test_labelClass->setWindowTitle(QApplication::translate("test_labelClass", "test_label", 0));
        ok_label->setText(QApplication::translate("test_labelClass", "<html><head/><body><p>&lt;c/c++\345\255\246\344\271\240\346\214\207\345\215\227&gt;\350\257\255\346\263\225\347\257\207</p></body></html>", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class test_labelClass: public Ui_test_labelClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_LABEL_H
