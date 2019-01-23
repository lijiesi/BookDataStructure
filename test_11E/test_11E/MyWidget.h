#pragma once

#include <QFrame>
#include <QPixmap>
#include <QMouseEvent>
class MyWidget : public QFrame
{
	Q_OBJECT
signals:
	void selected(QRect area);


public:
	MyWidget(QWidget *parent);
	~MyWidget();

private:
	QPixmap m_pictures;
	bool m_pressFlag;
	QPoint m_point;
	QPoint m_start, m_end;

private:
	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
};

