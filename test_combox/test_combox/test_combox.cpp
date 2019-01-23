#include "test_combox.h"

test_combox::test_combox(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.btn_combox->addItem("chinese","ch");
	ui.btn_combox->addItem("english","en");
	ui.btn_combox->addItem("french","fr");
	ui.btn_combox->insertItem(1, "japan","ja");

	connect(ui.btn_ok, SIGNAL(clicked()), this, SLOT(onbtnok()));
	connect(ui.btn_combox, SIGNAL(currentIndexChanged(int)), this, SLOT(combox_change()));
}
int test_combox::onbtnok()
{
	int index = ui.btn_combox->currentIndex();
	QString data = ui.btn_combox->itemData(index).toString();
	QString text = ui.btn_combox->itemText(index);
	ui.plain_text->appendPlainText(data);
	ui.plain_text->appendPlainText(text);
	return 0;
}
int test_combox::combox_change()
{
	ui.plain_text->appendPlainText(QString::number(123));
	return 0;
}