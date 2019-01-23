#include "MyWidget.h"
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_pressFlag = false;
	m_pictures.load("C:/Users/77487/Desktop/123.jpg");
}

MyWidget::~MyWidget()
{
}

void MyWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	painter.drawPixmap(0, 0, width, height, m_pictures);
	if (m_pressFlag)
	{
		painter.setPen(QColor(0xff, 0x00, 0x00));
		painter.drawLine(QPoint(0, m_point.y()), QPoint(width, m_point.y()));
		painter.drawLine(QPoint(m_point.x(), 0), QPoint(m_point.x(), height));

		if (0)
		{
			painter.setBrush(QColor(0xff, 0xff, 0x00));
			QRect rect(m_start, m_end);
			painter.drawRect(rect);
		} 
		else
		{
			QRect rect(m_start,m_end);
			QRect full(0, 0, width, height);
			painter.setBrush(QColor(0, 0, 0, 100));
			painter.setClipRegion(QRegion(full) - QRegion(rect));
			painter.drawRect(full);
		}
		

	}
}
void MyWidget::mousePressEvent(QMouseEvent *event)
{
	m_start = m_end = event->pos();
	m_pressFlag = true;

}
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
	update();
	m_pressFlag = false;
	QRect area(m_start,m_end);
	emit selected(area);
}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (m_pressFlag)
	{
		m_end = event->pos();
		m_point = event->pos();
		update();
	}

}
