#include "MyWidget.h"
#include <QDebug>
#include <QPainter>
MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	m_status = false;
	m_pressed = false;

	m_progressed = 0;
	m_range = 100;
	setMouseTracking(true);
	setCursor(Qt::PointingHandCursor);
}

MyWidget::~MyWidget()
{
}
void MyWidget::setRange(int range)
{
	m_range = range;
	update();
}
void MyWidget::setProgress(int progress)
{
	m_progressed = progress;
	update();
}
int MyWidget::range()
{
	return m_range;
}
int MyWidget::progress()
{
	return m_progressed;
}
QSize MyWidget::sizeHint()
{
	return QSize(100, 20);
}
void MyWidget::enterEvent(QEvent * event)
{
	qDebug() << "focused in";
	m_status = true;
	update();
	emit focused(true);

}
void MyWidget::leaveEvent(QEvent * event)
{
	qDebug() << "focused out";
	m_status = false;
	update();
	emit focused(false);
}
void MyWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button()== Qt::LeftButton)
	{
		m_pressed = true;
	}
}
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
	if (m_pressed)
	{
		m_pressed = false;
		m_progressed = position2progress(event->pos().x());
		update();
		emit clicked(m_progressed);
	}
}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
	int progress = position2progress(event->pos().x());
	if (m_pressed)
	{
		m_progressed = position2progress(event->pos().x());
		update();
	}
	emit tracking(progress, event->pos());

}
void MyWidget::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	int width = this->width();
	int height = this->height();
	int vcenter = height / 2;
	int oxff = 0;
	QColor colorleft = QColor(44, 143, 214);
	QColor colorright = QColor(0x888888);
	QColor colorhand = QColor(51, 153, 255);
	QColor colorhandFrame = QColor(0xcccccc);

	int position = oxff + m_progressed*width / m_range;
	if (!m_status)
	{
		//Ï¸ÏßÄ£Ê½
		QPen pen;
		pen.setWidth(2);
		//×ó°ë¶Î
		pen.setColor(colorleft);
		painter.setPen(pen);
		painter.drawLine(QPoint(0, vcenter), QPoint(position, vcenter));
		//ÓÒ°ë¶Î
		pen.setColor(colorright);
		painter.setPen(pen);
		painter.drawLine(QPoint(position, vcenter), QPoint(width, vcenter));

		//Ð¡Ô²Çò
		pen.setWidth(1);
		pen.setColor(colorhandFrame);
		painter.setPen(pen);
		painter.setBrush(colorhand);
		painter.drawEllipse(QPoint(position + 5, vcenter), 5, 5);
	}
	else
	{
		//´ÖÏßÄ£Ê½
		QPen pen;
		pen.setWidth(4);
		//×ó°ë¶Î
		pen.setColor(colorleft);
		painter.setPen(pen);
		painter.drawLine(QPoint(0, vcenter), QPoint(position, vcenter));
		//ÓÒ°ë¶Î
		pen.setColor(colorright);
		painter.setPen(pen);
		painter.drawLine(QPoint(position, vcenter), QPoint(width, vcenter));

		//ÊÖ±ú
		pen.setWidth(1);
		pen.setColor(colorhandFrame);
		painter.setPen(pen);
		painter.setBrush(colorhand);
		int w = 20;
		int h = 10;
		QRect recthand(position, vcenter - h / 2, w, h);
		painter.drawRoundedRect(recthand, 4, 4);
	}

}
int MyWidget::position2progress(int position)
{
	int width = this->width()-20;
	int xoff = 10;
	position -= xoff;
	if (position<0)
	{
		position = 0;
	}
	else if (position>width)
	{
		position = width;
	}
	return position * m_range / width;
}