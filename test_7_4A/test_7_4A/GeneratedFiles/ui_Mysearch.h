/********************************************************************************
** Form generated from reading UI file 'Mysearch.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSEARCH_H
#define UI_MYSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mysearch
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *btnText;
    QPushButton *btnSearch;

    void setupUi(QWidget *Mysearch)
    {
        if (Mysearch->objectName().isEmpty())
            Mysearch->setObjectName(QStringLiteral("Mysearch"));
        Mysearch->resize(578, 73);
        horizontalLayout = new QHBoxLayout(Mysearch);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnText = new QLineEdit(Mysearch);
        btnText->setObjectName(QStringLiteral("btnText"));

        horizontalLayout->addWidget(btnText);

        btnSearch = new QPushButton(Mysearch);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));

        horizontalLayout->addWidget(btnSearch);


        retranslateUi(Mysearch);

        QMetaObject::connectSlotsByName(Mysearch);
    } // setupUi

    void retranslateUi(QWidget *Mysearch)
    {
        Mysearch->setWindowTitle(QApplication::translate("Mysearch", "Mysearch", 0));
        btnSearch->setText(QApplication::translate("Mysearch", "\346\237\245\346\211\276", 0));
    } // retranslateUi

};

namespace Ui {
    class Mysearch: public Ui_Mysearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSEARCH_H
