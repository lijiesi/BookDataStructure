#include "MySeekBar.h"
#include <QDebug>
MySeekBar::MySeekBar(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	my_overly = new Overlay(this);
	my_overly->setFixedSize(60, 20);
	my_overly->hide();

	connect(ui.frame, SIGNAL(focused(bool)), this, SLOT(onseekFoucsed(bool)));
	connect(ui.frame, SIGNAL(clicked(int)), this, SLOT(onseekClicked(int)));
	connect(ui.frame, SIGNAL(tracking(int, QPoint)), this, SLOT(onseekTracking(int, QPoint)));
}
int MySeekBar::onseekFoucsed(bool yes)
{
	my_overly->setVisible(yes);
	return 0;
}
int MySeekBar::onseekClicked(int progress)
{
	return 0;
}
int MySeekBar::onseekTracking(int progress, QPoint pos)
{
	char buf[64];
	sprintf(buf, "%d", progress);
	my_overly->setText(buf);
	pos.setY(-10);
	pos.setX(pos.x() - 20);
	pos = ui.frame->mapToGlobal(pos);
	my_overly->move(pos);
	return 0;
}