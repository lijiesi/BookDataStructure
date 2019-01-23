#include "test_12_3.h"
#include "MyItemDrawer.h"
test_12_3::test_12_3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	addItem("mei", "18064117903", false);
	addItem("fang", "18780008000", false);
	addItem("qiang", "1380001000", true);
	addItem("gang", "1380002000", true);
	ui.listWidget->setItemDelegate(new MyItemDrawer(ui.listWidget));
}

void test_12_3::addItem(QString name, QString phone, bool male)
{
	QListWidgetItem *item = new QListWidgetItem();
	item->setData(Qt::DisplayRole, name);
	item->setData(Qt::UserRole, phone);
	item->setData(Qt::UserRole + 1, male);
	ui.listWidget->addItem(item);
}