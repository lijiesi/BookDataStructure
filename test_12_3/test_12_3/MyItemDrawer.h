#pragma once

#include <QStyledItemDelegate>
class MyItemDrawer : public QStyledItemDelegate
{
	Q_OBJECT

public:
	MyItemDrawer(QObject *parent);
	~MyItemDrawer();


private:
	virtual void paint(QPainter * painter, 
		const QStyleOptionViewItem & option, 
		const QModelIndex & index) const;
	virtual QSize sizeHint(const QStyleOptionViewItem & option,
		const QModelIndex & index) const;
};
