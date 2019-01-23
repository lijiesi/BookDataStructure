#include "MyMap.h"
#include<QPainter>
MyMap::MyMap(QWidget *parent)
	: QFrame(parent)
{
	m_map.load("C:\\Users\\77487\\Desktop\\123.jpg");
}

MyMap::~MyMap()
{
}
void MyMap::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	QRect target(0, 0, width, height);

	int m_width = m_map.width();
	int m_heigh = m_map.height();
	QRect source(0, 0, m_width, m_heigh);

	painter.drawPixmap(target, m_map, source);
}