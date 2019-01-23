#include "MyItemDrawer.h"
#include <QPainter>
MyItemDrawer::MyItemDrawer(QObject *parent)
	: QStyledItemDelegate(parent)
{
	
}


MyItemDrawer::~MyItemDrawer()
{
}
void MyItemDrawer::paint(QPainter * painter,
	const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	QPixmap m_female(":/test_12_3/Resources/female.png");
	QPixmap m_male(":/test_12_3/Resources/male.png");

	QRect rect = option.rect;
	rect.adjust(2, 2, -2, -2);
	QString name = index.data(Qt::DisplayRole).toString();
	QString phone = index.data(Qt::UserRole).toString();
	bool male = index.data(Qt::UserRole + 1).toBool();
	if (option.state&QStyle::State_Selected)
	{
		painter->setBrush(QColor(0xcc, 0xaa, 0xaa));
		painter->drawRoundedRect(rect, 2, 2);
		painter->setBrush(Qt::NoBrush);
	}
	if (1)
	{
	QRect dst = rect;
	dst.setRight(rect.left() + 40);
	QRect area(0, 0, 20,20);
	area.moveCenter(dst.center());
	painter->drawPixmap(area, male ? m_male : m_female);
	}
	if (1)
	{
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setBottom(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, name);
	}
	if (1)
	{
		QRect dst = rect;
		dst.setLeft(rect.left() + 40);
		dst.setTop(rect.top() + 20);
		painter->drawText(dst, Qt::AlignLeft | Qt::AlignVCenter, phone);
	}
}
QSize MyItemDrawer::sizeHint(const QStyleOptionViewItem & option,
	const QModelIndex & index) const
{
	QSize size = QStyledItemDelegate::sizeHint(option, index);
	size.setHeight(40);
	return size;
}