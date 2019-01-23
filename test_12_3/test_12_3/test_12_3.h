#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_12_3.h"

class test_12_3 : public QMainWindow
{
	Q_OBJECT

public:
	test_12_3(QWidget *parent = Q_NULLPTR);

private:
	void addItem(QString name, QString phone, bool male);

private:
	Ui::test_12_3Class ui;
};
