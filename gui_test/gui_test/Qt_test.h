#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
class Qt_test : public QWidget
{
	Q_OBJECT

public:
	Qt_test(QWidget *parent);
	~Qt_test();
private:
	QPushButton *ok_push;
	QLineEdit *ok_line;
	QTextEdit *ok_text;
	QVBoxLayout *ok_vBox;
	QHBoxLayout *ok_hBox;
};
