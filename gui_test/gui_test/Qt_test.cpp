#include "Qt_test.h"

Qt_test::Qt_test(QWidget *parent)
	: QWidget(parent)
{
	ok_push = new QPushButton(this);
	ok_push->setText("ok");
	ok_line = new QLineEdit(this);
	ok_text = new QTextEdit(this);

	ok_vBox = new QVBoxLayout(this);
	ok_hBox = new QHBoxLayout(this);

	ok_hBox->addWidget(ok_line);
	ok_hBox->addWidget(ok_push);

	ok_vBox->addLayout(ok_hBox);
	ok_vBox->addWidget(ok_text);
	this->setLayout(ok_vBox);

}

Qt_test::~Qt_test()
{
}
