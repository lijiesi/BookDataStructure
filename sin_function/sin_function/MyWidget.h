#pragma once

#include <QFrame>

class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();

	void changede_funciton(int period, int radius, int grain);


private:
	QPoint origin();
	QPoint toCoordinate(QPoint p);
	QPoint fromCoordinate(QPoint p);

private:
	int m_period;
	int m_grain;
	int m_radius;

private:
	void paintEvent(QPaintEvent * event);
};
