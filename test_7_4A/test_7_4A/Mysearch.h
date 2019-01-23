#pragma once

#include <QWidget>
#include "ui_Mysearch.h"

class Mysearch : public QWidget
{
	Q_OBJECT

public:
	Mysearch(QWidget *parent = Q_NULLPTR);
	~Mysearch();

public:
	Ui::Mysearch ui;
};
