#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_7_4A.h"
#include "Mysearch.h"
class test_7_4A : public QMainWindow
{
	Q_OBJECT

public:
	test_7_4A(QWidget *parent = Q_NULLPTR);

private:
	Mysearch *m_searchWin;

private slots:
	int onstart();
	int onsearch();

private:
	Ui::test_7_4AClass ui;
};
