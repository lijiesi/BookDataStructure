#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MySeekBar.h"
#include "Overlay.h"
class MySeekBar : public QMainWindow
{
	Q_OBJECT

public:
	MySeekBar(QWidget *parent = Q_NULLPTR);

private slots:
	int onseekFoucsed(bool yes);
	int onseekClicked(int progress);
	int onseekTracking(int progress, QPoint pos);
private:
	Ui::MySeekBarClass ui;
	Overlay *my_overly;
};
