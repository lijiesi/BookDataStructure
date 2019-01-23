#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_11E.h"

class test_11E : public QMainWindow
{
	Q_OBJECT

public:
	test_11E(QWidget *parent = Q_NULLPTR);
private slots:
	int onselected();
private:
	Ui::test_11EClass ui;
};
