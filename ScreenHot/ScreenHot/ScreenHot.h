#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ScreenHot.h"
class ScreenHot : public QMainWindow
{
	Q_OBJECT

public:
	ScreenHot(QWidget *parent = Q_NULLPTR);


private slots:
	int onDelete();
	int onChange();
	int onDoubleClicked(QListWidgetItem *item);


private:
	Ui::ScreenHotClass ui;
};
