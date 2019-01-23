#include "check_box.h"

check_box::check_box(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.ok_check, SIGNAL(stateChanged (int)), this, SLOT(onbuttonshow( )));
	connect(ui.ok_button, SIGNAL(clicked(bool)), this, SLOT(onshow(bool )));
}
int check_box::onbuttonshow()
{
	if (ui.ok_check->isChecked())
	{
		ui.ok_button->setEnabled(true);
	}
	else
	{
		ui.ok_button->setEnabled(false);
	}
	return 0;
}
int check_box::onshow(bool checked)
{
	ui.text_show->append(QString::number(123));
	return 0;
}