/********************************************************************************
** Form generated from reading UI file 'check_box.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_BOX_H
#define UI_CHECK_BOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_check_boxClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *text_show;
    QCheckBox *ok_check;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok_button;
    QPushButton *no_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *check_boxClass)
    {
        if (check_boxClass->objectName().isEmpty())
            check_boxClass->setObjectName(QStringLiteral("check_boxClass"));
        check_boxClass->resize(818, 559);
        centralWidget = new QWidget(check_boxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        text_show = new QTextBrowser(centralWidget);
        text_show->setObjectName(QStringLiteral("text_show"));

        verticalLayout->addWidget(text_show);

        ok_check = new QCheckBox(centralWidget);
        ok_check->setObjectName(QStringLiteral("ok_check"));

        verticalLayout->addWidget(ok_check);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok_button = new QPushButton(centralWidget);
        ok_button->setObjectName(QStringLiteral("ok_button"));
        ok_button->setEnabled(false);

        horizontalLayout->addWidget(ok_button);

        no_button = new QPushButton(centralWidget);
        no_button->setObjectName(QStringLiteral("no_button"));

        horizontalLayout->addWidget(no_button);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        check_boxClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(check_boxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 26));
        check_boxClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(check_boxClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        check_boxClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(check_boxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        check_boxClass->setStatusBar(statusBar);

        retranslateUi(check_boxClass);

        QMetaObject::connectSlotsByName(check_boxClass);
    } // setupUi

    void retranslateUi(QMainWindow *check_boxClass)
    {
        check_boxClass->setWindowTitle(QApplication::translate("check_boxClass", "check_box", 0));
        text_show->setHtml(QApplication::translate("check_boxClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;!DOCTYPE html&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;html&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;head&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;meta &quot;charset=utf-8&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\">&lt;title&gt;\350\217\234\351\270\237\346\225\231\347\250\213(runoob.com)&lt;/title&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;/head&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;body&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;h1&gt;\346\210\221\347\232\204\347\254\254\344\270\200\344\270\252\346\240\207\351\242\230&lt;/h1&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;h2&gt;\350\277\231\346\230\257\344\270\200\344\270\252\346\240\207\351\242\230&lt;/h2&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;h3&gt;\350\277\231\346\230\257"
                        "\344\270\200\344\270\252\346\240\207\351\242\230&lt;/h3&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;h4&gt;\350\277\231\346\230\257\344\270\200\344\270\252\346\240\207\351\242\230&lt;/h4&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;p&gt;\346\210\221\347\232\204\347\254\254\344\270\200\344\270\252\346\256\265\350\220\275\343\200\202&lt;/p&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;p&gt;\350\277\231\346\230\257\345\217\246\345\244\226\344\270\200\344\270\252\346\256\265\350\220\275\343\200\202&lt;/p&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;a href=&quot;http://www.runoob.com&quot;&gt;\350\277\231\346\230\257\344\270\200\344\270\252\351\223\276\346"
                        "\216\245&lt;/a&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;img src=&quot;file:///C:/Users/77487/Desktop/qt/123.jpg&quot; width=&quot;500&quot; height=&quot;401&quot; /&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;/body&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;/html&gt;</p></body></html>", 0));
        ok_check->setText(QApplication::translate("check_boxClass", "\345\220\214\346\204\217", 0));
        ok_button->setText(QApplication::translate("check_boxClass", "\347\241\256\345\256\232", 0));
        no_button->setText(QApplication::translate("check_boxClass", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class check_boxClass: public Ui_check_boxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_BOX_H
