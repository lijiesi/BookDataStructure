#pragma once

#include <QWidget>

class Overlay : public QWidget
{
	Q_OBJECT

		
public:
	Overlay(QWidget *parent);
	~Overlay();
	void setText(const QString & text);

private:
	virtual void paintEvent(QPaintEvent *event);

private:
	QString m_text;
};
