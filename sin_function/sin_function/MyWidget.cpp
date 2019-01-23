#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_period = 20;
	m_grain = 1;
	m_radius = 10;
}

MyWidget::~MyWidget()
{
}

void MyWidget::changede_funciton(int period, int radius, int grain)
{
	m_period = period;
	m_radius = radius;
	m_grain = grain;
	update();
}
QPoint MyWidget::origin()
{
	QRect o = this->rect();
	return o.center();
}

//GUI坐标转换成对应坐标
QPoint MyWidget::toCoordinate(QPoint p)
{
	QPoint o = origin();
	QPoint result = p - o;
	result.setY(0 - result.y());
	return result;
}
//从对应坐标转成GUI坐标
QPoint MyWidget::fromCoordinate(QPoint p)
{
	QPoint o = origin();
	p.setY(0 - p.y());
	return o + p;
}
void MyWidget::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	painter.setBrush(QColor(0x00, 0x00, 0x00));
	painter.drawRect(0, 0, width, height);
	QPoint o = origin();
	painter.setPen(QColor(0xff, 0x00, 0x00));
	painter.drawLine(QPoint(0, o.y()), QPoint(width, o.y()));
	painter.drawLine(QPoint(o.x(), 0), QPoint(o.x(), height));
	QPoint p1(0, 0);
	for (int x = 0; x < width / 2;x+=m_grain)
	{
		double angle = (double)x / m_period * 3.1415924;
		double y = m_radius*sin(angle);
		QPoint p2(x, y);
		QPoint base(0, 0);
		painter.drawLine(fromCoordinate(p1), fromCoordinate(p2));
		painter.drawLine(fromCoordinate(base-p1), fromCoordinate(base-p2));
		p1 = p2;
	}
}