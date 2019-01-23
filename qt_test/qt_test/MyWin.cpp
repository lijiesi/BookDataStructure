#include "MyWin.h"

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	ok_push = new QPushButton(this);
	ok_line = new QLineEdit(this);
	layout = new QVBoxLayout(this);
	ok_line->setSizePolicy(QSizePolicy::Expanding
		, QSizePolicy::Expanding);
	layout->addWidget(ok_push);
	layout->addWidget(ok_line);
	
	this->setLayout(layout);
}

MyWin::~MyWin()
{
}
