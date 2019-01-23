#include "ScreenHot.h"
#include <QMessageBox>
ScreenHot::ScreenHot(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QIcon icon1(":/ScreenHot/Resources/book.png");
	ui.btnScreen->addItem(new QListWidgetItem(icon1, "book"));

	QIcon icon2(":/ScreenHot/Resources/heart.png");
	ui.btnScreen->addItem(new QListWidgetItem(icon2, "heart"));

	QIcon icon3(":/ScreenHot/Resources/location.png");
	ui.btnScreen->addItem(new QListWidgetItem(icon3, "location"));
	
	//添加role的方法
/*	QIcon icon1(":/ScreenHot/Resources/book.png");*/
// 	QListWidgetItem *item = new QListWidgetItem(icon1, "book");
// 	item->setData(Qt::UserRole, 1);
// 	ui.btnScreen->addItem(item);
	QAbstractItemModel *model = ui.btnScreen->model();
	model->insertRow(3);
	model->setData(model->index(3,0),"hahaha",Qt::DisplayRole);
	connect(ui.btnRemove, SIGNAL(clicked()), this, SLOT(onDelete()));
	connect(ui.btnChange, SIGNAL(clicked()), this, SLOT(onChange()));
	connect(ui.btnScreen, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this,
		SLOT(onDoubleClicked(QListWidgetItem *)));
}
int ScreenHot::onDelete()
{
	int row = ui.btnScreen->currentRow();
	QListWidgetItem *item = ui.btnScreen->takeItem(row);
	if (item)
	{
		delete item;
	}
	return 0;
}
int ScreenHot::onChange()
{
	if (ui.btnScreen->viewMode() == QListView::ListMode)
	{
		ui.btnScreen->setViewMode(QListView::IconMode);
	} 
	else
	{
		ui.btnScreen->setViewMode(QListView::ListMode);
	}
	return 0;
}
int ScreenHot::onDoubleClicked(QListWidgetItem *item)
{
	QMessageBox::information(this,"good input",item->text());
	int value = item->data(Qt::UserRole).toInt();
	return 0;
}