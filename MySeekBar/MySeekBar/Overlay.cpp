#include "Overlay.h"
#include <QPainter>
Overlay::Overlay(QWidget *parent)
	: QWidget(parent)
{
	setWindowFlags(Qt::ToolTip);
	setAttribute(Qt::WA_TranslucentBackground);
}

Overlay::~Overlay()
{
}
void Overlay::setText(const QString & text)
{
	m_text = text;
	update();
}
void Overlay::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	int w = width();
	int h = height();
	painter.setPen(QColor(0,0,0));
	painter.setBrush(QColor(0xFF, 0xFF,0xAA));
	painter.drawRect(0, 0, w, h);

	QFont font = painter.font();
	font.setPixelSize(14);
	painter.setFont(font);
	painter.setPen(QPen(QColor(0xff,0x00,0x00)));
	QRect textRect(0, 0, w, h);
	painter.drawText(textRect,Qt::AlignCenter, m_text);
}