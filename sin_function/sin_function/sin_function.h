#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sin_function.h"

class sin_function : public QMainWindow
{
	Q_OBJECT

public:
	sin_function(QWidget *parent = Q_NULLPTR);


private slots:
	int onchangde();
private:
	Ui::sin_functionClass ui;
};
