#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_check_box.h"

class check_box : public QMainWindow
{
	Q_OBJECT

public:
	check_box(QWidget *parent = Q_NULLPTR);


private slots:
	int onbuttonshow();
	int onshow(bool checked);


private:
	Ui::check_boxClass ui;
};
