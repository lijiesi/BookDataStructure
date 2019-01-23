#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_combox.h"

class test_combox : public QMainWindow
{
	Q_OBJECT

public:
	test_combox(QWidget *parent = Q_NULLPTR);

private slots:
	int onbtnok();
	int combox_change();

private:
	Ui::test_comboxClass ui;
};
