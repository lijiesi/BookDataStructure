#pragma once

#include <QWidget>
#include<QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();
private:
	QLineEdit *ok_line;
	QPushButton *ok_push;
	QVBoxLayout *layout;
};
