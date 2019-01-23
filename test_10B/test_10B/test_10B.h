#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test_10B.h"
#include <QLabel>
class test_10B : public QMainWindow
{
	Q_OBJECT

public:
	test_10B(QWidget *parent = Q_NULLPTR);

private slots:
	int btnNew();
	int btnOpen();
	int btnSave();

private:
	QString m_filepath;
	QLabel *mylabel;
	Ui::test_10BClass ui;
};
