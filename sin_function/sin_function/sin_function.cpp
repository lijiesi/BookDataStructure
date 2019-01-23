#include "sin_function.h"
#include "MyWidget.h"
sin_function::sin_function(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btn_period, SIGNAL(valueChanged(int)), this, SLOT(onchangde()));
	connect(ui.btn_radius, SIGNAL(valueChanged(int)), this, SLOT(onchangde()));
	connect(ui.btn_grain, SIGNAL(valueChanged(int)), this, SLOT(onchangde()));
}
int sin_function::onchangde()
{
	ui.btnframe->changede_funciton(ui.btn_period->value(),
		ui.btn_radius->value(),
		ui.btn_grain->value());
	return 0;
}