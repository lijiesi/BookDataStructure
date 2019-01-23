#pragma once

#include <QFrame>
#include <QPixmap>
class MyMap : public QFrame
{
	Q_OBJECT

public:
	MyMap(QWidget *parent);
	~MyMap();


private:
	QPixmap m_map;
private:
	void paintEvent(QPaintEvent *event);
};
