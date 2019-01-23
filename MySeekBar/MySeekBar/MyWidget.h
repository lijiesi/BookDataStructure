#pragma once

#include <QFrame>
#include <QMouseEvent>
class MyWidget : public QFrame
{
	Q_OBJECT

signals:
	void clicked(int progress);
	void tracking(int progress, QPoint pos);
	void focused(bool yes);

public:
	MyWidget(QWidget *parent);
	~MyWidget();


public:
	void setRange(int range);
	void setProgress(int progress);
	int range();
	int progress();

private:
	virtual QSize sizeHint();
	virtual void enterEvent(QEvent * event);
	virtual void leaveEvent(QEvent * event);


private:
	int position2progress(int position);

private:
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);

	virtual void paintEvent(QPaintEvent * event);

private:
	int m_range;
	int m_pressed;
	int m_progressed;
	bool m_status;
};
